/*	Chuong trinh kiem tra so nguyen to
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

bool isPrime(int n) {
	if (n<2) return false;
	for (int i = 2; i <= sqrt(n) ; i++) {
		if (n%i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	printf("Nhap vao so n = ");
	scanf("%d", &n);
	if (isPrime(n) == true) printf("%d la so nguyen to", n);
	else printf("%d khong phai la so nguyen to", n);
	getch();
}
