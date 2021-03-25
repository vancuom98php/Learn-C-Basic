/*	Chuong trinh chuyen so La Ma thanh so thap phan
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int a[MAX], i, len, j, number;
	char roman[MAX];
	printf("Nhap so La Ma (gom cac chu I, V, X, L, C, D, M): ");
	scanf("%s", roman);
	len = strlen(roman);
	for (i = 0; i < len; i++) {
		if (roman[i] == 'I') a[i] = 1;
		else if (roman[i] == 'V') a[i] = 5;
		else if (roman[i] == 'X') a[i] = 10;
		else if (roman[i] == 'L') a[i] = 50;
		else if (roman[i] == 'C') a[i] = 100;
		else if (roman[i] == 'D') a[i] = 500;
		else if (roman[i] == 'M') a[i] = 1000;
		else {
			printf("Oc");
			getch();
			exit(1);
		}
	}
	number = a[len - 1];
	for (j = len -1; j > 0; j--) {
		if (a[j] > a[j-1]) number -= a[j-1];
		else number += a[j-1];
	}
	printf("So La ma %s sau khi duoc chuyen la %d", roman, number);
	getch();
}
