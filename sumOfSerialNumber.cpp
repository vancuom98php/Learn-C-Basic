/*	Chuong trinh tinh theo cong thuc: 
	1*2 + 2*3 + 3*4 +...+ n*(n+1);
*/

#include <stdio.h>
#include <conio.h>

int sumOfSerial(int n) {
	if (n==1) return 2;
	else return sumOfSerial(n-1) + n*(n+1);
}

int main() {
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	printf("Tong day so theo n*(n+1) la: %d", sumOfSerial(n));
	getch();
}
