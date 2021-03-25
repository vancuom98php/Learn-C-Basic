#include <stdio.h>
#include <conio.h>
#include <math.h>

float poly(int n, float x, float a[]) {
	if (n==0) return a[0];
	else return poly(n-1, x, a) + a[n]*pow(x, n); 
}

int main() {
	int i, n;
	printf("Nhap n = ");
	scanf("%d", &n);
	float x, result, a[n];
	printf("Nhap x = ");
	scanf("%f", &x);

	for (i = 0; i <= n; i++) {
		printf("a%d = ", i);
		scanf("%f", &a[i]);
	}
	result = poly(n, x, a);
//	for (i = n; i >= 0; i--) {
//		result += a[i]*pow(x, i);
//	}
	printf("Ket qua cua da thuc: %.3f", result);
	getch();
}
