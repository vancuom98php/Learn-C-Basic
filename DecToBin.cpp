/*	Chuong trinh chuyen so thap phan thanh so nhi phan
*/

#include <conio.h>
#include <stdio.h>

void decToBin(int n) {
	if (n>0) {
		decToBin(n/2);
		printf("%d", n%2);
	}
}

int main() {
	int n;
	do {
		printf("Nhap so n>0: ");
		scanf("%d", &n);
	}
	while (n<0);
	printf("So %d duoc chuyen sang he nhi phan la: ", n);
	decToBin(n);
	getch();
}
