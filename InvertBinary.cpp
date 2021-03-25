/*	Chuong trinh chuyen so thap phan thanh he nhi phan
	Sau do dao so nhi phan
	Cuoi cung la chuyen so nhi phan do thanh so thap phan
	Vd: 23 --> 10111 --> 11101 --> 29
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int decToBin(int n) {
	int s, i;
	s = 0;
	i = 0;
	while (n>0) {
		s += (n%2)*pow(10, i);
		i++;
		n /=2 ;
	}
	return s;
}

int binToDec(int n) {
	int number, i;
	number = 0;
	i = 0;
	while (n>0) {
		number += (n%10)*pow(2, i);
		n /= 10;
		i++;
	}
	return number;
}

int invertNumber(int n) {
	int number;
	number = 0;
	while (n>0) {
		number = (number*10) + n%10;
		n /= 10;
	}
	return number;
}

int main() {
	int n, bin, inv, dec;
	printf("Nhap so nguyen n = ");
	scanf("%d", &n);
	bin = decToBin(n);
	printf("So %d sau khi chuyen sang he nhi phan la: %d\n", n, bin);
	inv = invertNumber(bin);
	printf("Sau khi dao nguoc day nhi phan tren la: %d\n", inv);
	dec = binToDec(inv);
	printf("So %d sau khi chuyen sang he 10 la: %d", inv, dec);
	getch();
}
