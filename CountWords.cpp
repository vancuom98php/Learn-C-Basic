#include <stdio.h>
#include <conio.h>
#include <string.h>

int countWords(char *str) {
	int i, n, count;
	n = strlen(str);
	count = 0;
	if (str[0] != ' ') count = 1;
	for (i = 0; i < n-1; i++) {
		if (str[i] == ' ' && str[i+1] != ' ')
			count++;
	}
	return count;
}

int main() {
	char str[100];
	printf("Nhap chuoi: ");
	gets(str);
	printf("%d", countWords(str));
	getch();
}
