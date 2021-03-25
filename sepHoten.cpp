#include <stdio.h>
#include <conio.h>
#include <string.h>

char *sepName(char *name, char *surName, char *lastName) {
	int i, j, n;
	n = strlen(name);
	for (i = 0; i < n; i++) {
		if (name[i] == ' ') break;
	}
	for (j = 0; j < i; j++) {
		surName[j] = name[j];
	}
	surName[i] = '\0';
	for (i = n-1; i > 0; i--) {
		if (name[i] == ' ') break;
	}
	for (j = i+1; j < n; j++) {
		lastName[j-i-1] = name[j];
	}
	lastName[j-i-1] = '\0';
}

int main() {
	char name[100], surName[20], lastName[20];
	printf("Nhap vao ten: ");
	gets(name);
	sepName(name, surName, lastName);
	printf("Ho: %s\n", surName);
	printf("Ten: %s", lastName);
	getch;
}
