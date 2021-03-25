/*	Chuong trinh chuyen so thap phan sang so thap luc phan
*/

#include <stdio.h>
#include <conio.h>

void decToHex(int n) {
	if (n > 0) {
		decToHex(n/16);
		if (n%16 > 9) {
			if (n%16 == 10) printf("A");
			else if (n%16 == 11) printf("B");
			else if (n%16 == 12) printf("C");
			else if (n%16 == 13) printf("D");
			else if (n%16 == 14) printf("E");
			else printf("F");
	}
	else printf("%d", n%16);
	}
}

int main() {
	int n;
	do {
		printf("Nhap so n>0: ");
		scanf("%d", &n);
	}
	while (n<0);
	printf("So sau khi duoc chuyen doi thanh he 16: ");
	decToHex(n);
	getch();
}
