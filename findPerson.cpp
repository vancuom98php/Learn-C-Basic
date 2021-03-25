#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct address {
	char quan[100];
	char phuong[100];
	char to[100];
};

struct people {
	char name[100];
	address add;
	int age;
	int salary;
};

address personAdd(people person[], int i) {
	address add;
	printf("- Quan: ");
	gets(person[i].add.quan);
	printf("- Phuong: ");
	gets(person[i].add.phuong);
	printf("- To: ");
	gets(person[i].add.to);
	return (person[i].add);
}

people newPerson(people person[], int i) {
	char tempAge[10];
	char tempSala[50];
	printf("Ho va ten: ");
	gets(person[i].name);
	printf("Dia chi:\n");
	personAdd(person, i);
	printf("Tuoi: ");
	gets(tempAge);
	person[i].age = atoi(tempAge);
	printf("Luong:(.000 VND) ");
	gets(tempSala);
	person[i].salary = atoi(tempSala);
	return (person[i]);
}

void input(people person[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Nguoi thu %d: \n", i+1);
		person[i] = newPerson(person, i);
		printf("\n");
	}
}

void output(people person[], int n, char *searchQuan, int searchAge, int searchSala) {
	for (int i = 0; i < n; i++) {
		if ((strcmp(person[i].add.quan, searchQuan) == 0 ) && person[i].age < searchAge && person[i].salary >= searchSala) {
			printf("Nhung nguoi o quan: %s, co tuoi duoi %d va thu nhap tu %d.000 VND tro le la:\n", searchQuan, searchAge, searchSala);
			printf("%s\n", person[i].name);
		}
	}
}

int main() {
	people person[MAX];
	char temp[10];
	int n, searchAge;
	int searchSala;
	char tempAge[10], tempSala[50], searchQuan[100];
	printf("Nhap so nguoi: ");
	gets(temp);
	n = atoi(temp);
	input(person, n);
	printf("Nhap quan can tim: ");
	gets(searchQuan);
	printf("Nhap gioi han tuoi: ");
	gets(tempAge);
	searchAge = atoi(tempAge);
	printf("Nhap muc luong thap nhat: ");
	gets(tempSala);
	searchSala = atoi(tempSala);
	output(person, n, searchQuan, searchAge, searchSala);
	getch();
}
