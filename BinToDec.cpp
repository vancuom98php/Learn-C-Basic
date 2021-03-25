/* Chuong trinh chuyen so nhi phan thanh so thap phan
*/

#include <stdio.h>
#include <conio.h>

int binToDec(int n) {
	int number = 0, pow;
	for (int i = 0; n>0; i++) {
		pow = 1;
		for (int j = 0; j<i ; j++) pow *= 2;
			number += pow*(n%10);
			n /= 10;
	}
	return number;
}

int main() {
	int bin;
	do {
	printf("Nhap so nhi phan: ");
	scanf("%d", &bin);
	}
	while(bin%10 > 1);
	printf("So thap phan tuong ung la: %d", binToDec(bin));
	getch();
}
