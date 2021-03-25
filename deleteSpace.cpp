#include <stdio.h>
#include <conio.h>
#include <string.h>

void *del(char *str, char c) {
	int i, j, n;
	n = strlen(str);
	for (i=0; i < n; i++) {
		if (str[i] == c) {
			for (j=i--; j < n; j++)
				str[j] = str[j+1];
			n--;
		}
	}
	return str;
}

int main() {
	char str[50];
	printf("Nhap chuoi ky tu: ");
	gets(str);
	printf("Chuoi sau khi xoa khoang trang: %s", del(str, ' '));
	getch();
}
