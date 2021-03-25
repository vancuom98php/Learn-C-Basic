#include <stdio.h>
#include <conio.h>
#include <string.h>

char *titleCase(char *str) {
	int i, j, n;
	n = strlen(str);
	strlwr(str);
	for (i=0; i < n; i++) {
		if ((i == 0) || (str[i-1] == ' '))
			str[i] -= 32;
	}
	return str;
}

int main() {
	char str[50];
	printf("Nhap chuoi ky tu: ");
	gets(str);
	printf("Chuoi ky tu theo kieu Title Case: %s", titleCase(str));
	getch();
}
