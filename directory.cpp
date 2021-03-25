#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 40

struct directory {
	char name[30];
	char address[30];
	char phoneNumber[12];
};

directory newPhone() {
	directory phone;
	printf("Ho ten: ");
	gets(phone.name);
	printf("Dia chi: ");
	gets(phone.address);
	printf("So dien thoai: ");
	gets(phone.phoneNumber);
	return (phone);
}

void input(directory phone[], int n) {
	phone[n] = newPhone();
}

void output(directory phone[], int i) {
	printf("Ho ten: %s\n", phone[i].name);
	printf("Dia chi: %s\n", phone[i].address);
	printf("So dien thoai: %s\n", phone[i].phoneNumber);
	printf("\n");
}

int main() {
	directory phone[MAX];
	char temp[10];
	char findName[30];
	char findAddress[30];
	int i, n, j, att;
	att = 1;
	n = 0;
	while (att) {
		do {
			system("cls");
			printf("      MY DIRECTORY\n");
			printf(" 1. Nhap thong tin moi\n");
			printf(" 2. Tim kiem so dien thoai\n");
			printf(" 3. In ra toan bo danh ba cua ban\n"); 
			printf(" 4. In ra danh ba theo dia chi\n");
			printf(" 5. Thoat\n");
			gets(temp);
			att = atoi(temp);
		}
		while (att < 1 && att > 5);
		switch (att) {
			case 1: 
				system("cls");
				printf("      MY DIRECTORY\n");
				printf("Nhap thong tin moi: \n");
				input(phone, n);
				n++;
	 			break;
			case 2:
				system("cls");
				printf("      MY DIRECTORY\n");
				j = 0;
				printf("Tim kiem so dien thoai\n");
				printf("Moi ban nhap ten: ");
				gets(findName);
				for (i = 0; i < n; i++) {
					if (strcmp(phone[i].name, findName) == 0) {
						output(phone, i);
						j++;
					}
				}
				if (j == 0) printf("Khong co ten %s trong danh ba\n", findName);
	 			break;
			case 3:
				system("cls");
				printf("      MY DIRECTORY\n");
				printf("Toan bo danh ba cua ban: \n");
				for (i = 0; i < n; i++) {
					printf("%d.\n", i+1);
					output(phone, i);
				}
		 		break;
			case 4:
				system("cls");
				printf("      MY DIRECTORY\n");
				printf("Danh ba theo dia chi: \n");
				printf("Moi ban nhap dia chi can tim: ");
				gets(findAddress);
				for (i = 0; i < n; i++) {
					if (strcmp(phone[i].address, findAddress) == 0) {
						output(phone, i);
						j++;
					}
				}
				if (j == 0) printf("Khong co ai o dia chi %s trong danh ba\n", findAddress);
		 		break;
			case 5: 
				system("cls");
				printf("      MY DIRECTORY\n");
				printf("Thoat!");
				exit(1);
				getch();
		}
		printf("Nhan phim bat ky de quay ve trang chu");
		getch();
	}
	getch();
}
