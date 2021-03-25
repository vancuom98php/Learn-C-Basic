#include <stdio.h>
#include <conio.h>
#include <math.h>

float canBac(float x, int n) {
	if (n == 1) return sqrt(x);
	else return sqrt(canBac(x, n-1) + x);
}

float quotient(float x, int n) {
	if (n == 1) return (x/2);
	else return quotient(x, n-1) + pow(x, n)/(n+1);
}

int main() {  
	float x;
	int n;
	printf("Nhap x = ");
	scanf("%f", &x);
	printf("nhap n = ");
	scanf("%d", &n);
	printf("Ket qua pheo tinh theo bai 31 trang 63 la: ");
	printf("%.3f", -canBac(x, n)-1+quotient(x, n));
	getch();
}
