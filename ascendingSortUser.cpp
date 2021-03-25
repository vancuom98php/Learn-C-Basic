#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct users {
	char name[30];
	char address[30];
};

users newUser() {
	users user;
	printf("Nhap ten: ");
	gets(user.name);
	printf("Nhap dia chi: ");
	gets(user.address);
	return (user);
}

void input(users user[], int n) {
	for (int i = 0; i < n; i++) {
		printf("User[%d]: \n", i + 1);
		user[i] = newUser();
		printf("\n");
	}
}

void output(users user[], int n) {
	for (int i = 0; i < n; i++) {
		printf("User[%d]: \n", i+1);
		printf("Ho ten: %s\n", user[i].name);
		printf("Dia chi: %s\n", user[i].address);
	}
}

void swap(users *user1, users *user2) {
	users temp;
	temp = *user1;
	*user1 = *user2;
	*user2 = temp;
}

void usersSort(users user[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (strcmp(user[j].name, user[j+1].name) > 0)
				swap(&user[j], &user[j+1]);
			else if (strcmp(user[j].name, user[j+1].name) == 0) {
				if (strcmp(user[j].address, user[j+1].address) > 0)
					swap(&user[j], &user[j+1]);
			}
		}
	}
}

int main() {
	users user[MAX];
	char temp[10];
	int n;
	printf("Nhap vao so nguoi: ");
	gets(temp);
	n = atoi(temp);
	printf("\nNhap thong tin tung nguoi:\n");
	input(user, n);
	usersSort(user, n);
	printf("Danh sach sau khi duoc sap xep: \n");
	output(user, n);
	getch();
}
