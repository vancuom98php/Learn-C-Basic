/*	Chuong trinh tinh giai thua cua mot so
*/

#include <stdio.h>
#include <conio.h>

int factorial(int n) {
	if (n==1) return 1;
	else return factorial(n-1)*n;
}

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	printf("%d! = %d", n, factorial(n));
	getch();
}
