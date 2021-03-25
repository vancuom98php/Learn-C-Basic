/*	Chuong trinh tim UCLN & BCNN
*/

#include <stdio.h>
#include <conio.h>

int UCLN(int a, int b) {
	if (b==0) return a;
	else UCLN(b, a%b);
}

int BCNN(int a, int b) {
	return (a*b)/UCLN(a, b);
}

int main() {
	int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("UCLN cua 2 so %d va %d la: %d\n", a, b, UCLN(a, b));
	printf("BCNN cua 2 so %d va %d la: %d", a, b, BCNN(a, b));
	getch();
}

