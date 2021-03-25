#include <stdio.h>
#include <conio.h>
#include <string.h>

void *coppyString(char *str, char *dest, int n, int start) {
	int i, j;
	i = start-1;
	for (j = 0 ; j < n; j++) {
		dest[j] = str[i];
		i++;
	}
	dest[j] = '\0';
	return dest;
}

int main() {
	char str[100], dest[100];
	int n, start;
	printf("Nhap chuoi: ");
	gets(str);
	printf("Nhap vi tri bat dau coppy: ");
	scanf("%d", &start);
	printf("Nhap so ky tu chi dinh can coppy: ");
	scanf("%d", &n);
	coppyString(str, dest, n, start);
	printf("%s", dest);
	getch();	
}
