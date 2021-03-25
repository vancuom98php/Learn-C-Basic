/*	Chuong trinh phan tich thua so nguyen to
	Vd: 153 = 3^2*17
*/

#include <stdio.h>
#include <conio.h>

int main() {
	int n;
	int dem;
	do {
		printf("Nhap n = ");
		scanf("%d", &n);
	}
	while (n<0);
	for (int i = 2; i<=n; i++) {
		dem = 0;
		while (n%i == 0) {
			dem++;
			n /= i;
		}
		if (dem) {
			if (dem > 1) printf("%d^%d", i, dem);
			else printf("%d", i);
			if (n>i) printf("*");
		}
	}
	getch();
}
