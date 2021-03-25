#include <stdio.h>
#include <conio.h>
#include <string.h>

char *toLower(char *str) {
	return strlwr(str);
}

char *toUpper(char *str) {
	return strupr(str);
}

int main() {
	char str[50];
	printf("Nhap chuoi ky tu: ");
	gets(str);
	printf("Chuoi sau khi bien doi thanh chu thuong: %s\n", toLower(str));
		printf("Chuoi sau khi bien doi thanh chu HOA: %s", toUpper(str));
	getch();
}
