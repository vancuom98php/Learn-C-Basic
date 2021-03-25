/*	Chuong trinh tim so	thoa dieu kien
	tong cac chu so cua n khi lua thua m thi bang bang dung n
	Vd: m = 3 thi 153 = 1^3 + 3^3 + 5^3 la hop le
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	int i, m, s, temp;
	printf("Nhap so m (1<m<6) = ");
	scanf("%d", &m);
	for (i = pow(10, m-1); i < pow(10, m); i++) {
		s = 0;
		temp = i;
		while (temp>0) {
			s += pow(temp%10, m);
			temp /= 10;
		}
		if (s == i) printf("%d ", i);
	}
	getch();
}
