#include <stdio.h>
#include <conio.h>
#include <string.h>

char *reverStr(char *str) {
	int i, j, n;
	char *result = new char[50];
	n = strlen(str);
	j = 0;
	for (i = n-1; i >= 0; i--) {
		result[j] = str[i];
		j++;
	}
	result[j] = '\0';
	return result;
}

int main() {
	char str[100];
	int i;
	printf("Nhap chuoi ky tu: ");
	fgets(str, 100, stdin);
	printf("Chuoi ky sau khi dao: ");
	printf("%s", reverStr(str));
	getch();
}
