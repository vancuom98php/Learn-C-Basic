#include <stdio.h>
#include <conio.h>
#include <string.h>

int determineString(char *str, char *smallStr) {
	int i, n, j , k, count, pos;
	n = strlen(str);
	pos = -2;
	for (i = 0; i < n; i++) {
		if (str[i] == smallStr[0]) {
			k = i+1;
			count = 1;
			for (j = 1; j < strlen(smallStr); j++) {
				if (str[k] == smallStr[j]) count++;
				k++;
			}
			if (count == strlen(smallStr)) pos = i;
		}
	}
	return pos+1;
}

int main() {
	char str[100], smallStr[100];
	printf("Nhap chuoi nguon: ");
	gets(str);
	printf("Nhao chuoi con: ");
	gets(smallStr);
	if (determineString(str, smallStr) < 0) printf("Chuoi con khong co trong chuoi nguon");
	else {
		printf("vi tri bat dau ca chuoi con la: %d", determineString(str, smallStr));
	}
	getch();
}
