/*	Kiem tra so vua nhap co phai la so nguyen
*/

#include <stdio.h>
#include <conio.h>

int main() {
	float n;
	printf("Nhap so n = ");
	scanf("%f", &n);
	if (n - (int)n == 0) printf("%g là so nguyen", n);
	else printf("%g khong phai la so nguyen", n);
	getch();
}
