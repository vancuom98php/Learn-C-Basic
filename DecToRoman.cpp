/*	Chuong trinh chuyen so thap phan sang so La Ma
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	int v[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	char s[13][3] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	int n, i;
	printf("Nhap so n = ");
	scanf("%d", &n);
	i = 0;
	while (n > 0) {
		if (n >= v[i]) {
			printf("%s", s[i]);
			n -= v[i];
		}
		else i++;
	}
	getch();
}
