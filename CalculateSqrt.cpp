/*	Chuong trinh tinh can bac 2 cua 1 so thuc >= 0
	theo phuong phap chia doi
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define epsilon 0.00001

float mySqrt(float n) {
	float result;
	result = 1.0;
	while (fabs(result*result - n)/n >= epsilon)
	result = (n/result - result)/2 + result;
	return result;
}

int main() {
	float n;
	do {
		printf("Nhap so thuc khong am n = ");
		scanf("%f", &n);
	}
	while (n<0);
	printf("Can bac 2 cua so %.5f là %.5f", n, mySqrt(n));
	getch();
}
