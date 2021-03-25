/*	Chuong trinh tinh S & V cua hinh cau
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

float acreageOfGlobular(float r) {
	return 4*(atan(1)*4)*pow(r,2);
}

float volumeOfGlobular(float r) {
	return (4.0/3.0)*(atan(1)*4)*pow(r,3);
}

int main() {
	float r, s, v;
	do {
		printf("Nhap ban kinh r = ");
		scanf("%f", &r);
		if (r < 0) printf("Oc\n");
	}
	while (r < 0);
	s = acreageOfGlobular(r);
	v = volumeOfGlobular(r);
	printf("Dien tich hinh cau %.2f\n", s);
	printf("The tich hinh cau %.2f", v);
	getch();
}

