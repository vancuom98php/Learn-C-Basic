#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char str[1000];
	int i, n, count;
	printf("Nhap chuoi: ");
	fgets(str, 1000, stdin);
	n =  strlen(str);
	count = 0;
	for (i = 0; i < n; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			count++;
	}
	printf("%d", count);
	getch();
}
