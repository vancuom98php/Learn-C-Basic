#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char str[50];
	int i, count;
	printf("Nhap chuoi ky tu ");
	fgets(str, 50, stdin);
	count = 0;
	for (i = 0; i < strlen(str); i++) {
		if ((str[i] == 't') && (str[i+1] == 'h'))
			++count;
	}
	printf("%d", count);
	getch();
	
}
