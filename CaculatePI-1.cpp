/* 	Chuong trinh tim so PI theo cong thuc tong: -4/n*(-1) voi n le
	Sai so Epsilon nhap tu ban phim
*/

#include <stdio.h>
#include <conio.h>

int main() {
	float eps, n, PI;
	int i;
	printf("Nhap vao epsilon = ");
	scanf("%f", &eps);
	PI = 0;
	n = 1.0;
	i = 0;
	while (4.0/n > eps) {
		  if (i%2 == 0) PI += 4.0/n;
		  else PI -= 4.0/n;
		  n += 2;
		  i++;
	}
	printf("%.4f", PI);
	getch();
}
