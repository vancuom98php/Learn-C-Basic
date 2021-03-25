#include <stdio.h>
#include <conio.h>
#include <string.h>

bool checkSymmetry(char *str) {
	int i, n;
	n = strlen(str);
	for (i=0; i < n/2; i++) 
		if (str[i] != str[n-1-i]) return false;
	return true;
}

int main() {
	char str[1000];
	printf("Nhap chuoi: ");
	gets(str);
	if (checkSymmetry(str) == true) printf("Doi xung");
	else printf("Khong doi xung");
	getch();
}
