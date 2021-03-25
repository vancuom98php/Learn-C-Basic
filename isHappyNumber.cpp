#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	int n, s, temp;
	unsigned long dem;
	printf("Nhap so n = ");
	scanf("%d", &n);
	temp = n;
	s = 0;
	dem = 0;
	while (temp != 1) {
		while (temp > 0) {
			s += pow((temp%10), 2);
			temp /= 10;
		}
		dem ++;
		if (dem == 1000000) break;
		temp = s;
		s = 0;
	}
	if (temp == 1) printf("%d la so hanh phuc", n);
	else printf("%d khong phai la so hanh phuc", n);
	getch();
}
