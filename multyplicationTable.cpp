#include <stdio.h>
#include <conio.h>

int main() {
	int i, j;
	printf("=========================MULTYPLICATION TABLE=========================\n\n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%2d  x %2d = %2d\t", j, i, i*j);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 10; i++) {
		for (j = 6; j <= 10; j++) {
			printf("%2d  x %2d = %2d\t", j, i, i*j);
		}
		printf("\n");
	}
	getch();
}
