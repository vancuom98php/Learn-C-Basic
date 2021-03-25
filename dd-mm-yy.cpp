#include <stdio.h>
#include <conio.h>

int main() {
	int d, m, y;
	do {
		printf("Nhap vao ngay: ");
		scanf("%d", &d);
	}
	while (d<1 || d>31);
	do {
		printf("Nhap vao thang: ");
		scanf("%d", &m);
	}
	while (m<1 || m>12);
	do {
		printf("Nhap vao nam: ");
		scanf("%d", &y);
	}
	while (y < 0);
	if (m==2) {
		if ((y%400 == 0) || (y%4 == 0 && y%100 != 0)) {
			if (d>29) {
				printf("Nam nhuan sao co %d ngay?\n", d);
				do {
					printf("Nhap lai ngay: ");
					scanf("%d", &d);
				}
				while (d>29);
			}
		}
		else {
			if (d>28) {
				printf("Nam khong nhuan sao co %d ngay?", d);
				do {
					printf("Nhap lai ngay: ");
					scanf("%d", &d);
				}
				while (d>28);
			}
		}
	}
	printf("%02d/%02d/%04d", d, m, y);
	getch();
}
