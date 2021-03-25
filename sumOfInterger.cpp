/*	Chuong trinh tinh tong cac chu so cua 1 so n nhap tu ban phim
*/

#include <stdio.h>
#include <conio.h>

int main() {
	int n;
	int sum;
	printf("Nhap so n = ");
	scanf("%d", &n);
	sum = 0;
	while (n>0) {
		sum += n%10;
		n /= 10;
	}
	printf("Tong cac chu so la: %d", sum);
	getch();
}
