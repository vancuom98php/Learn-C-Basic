#include <stdio.h>
#include <conio.h>

bool condition(int a, int b, int c) {
	if ((a+b+c==100) && (5*a+3*b+c/3.0 == 100))
		return true;
	else return false;
}

int main() {
	int standingBuffalo, lyingBufallo, oldBuffalo;
	for (standingBuffalo = 1; standingBuffalo < 100; standingBuffalo++) {
		for (lyingBufallo = 1; lyingBufallo < 100; lyingBufallo++) {
			for (oldBuffalo = 1; oldBuffalo < 100; oldBuffalo++) {
				if (condition(standingBuffalo, lyingBufallo, oldBuffalo)) {
					printf("Standing Buffalo: %d\n", standingBuffalo);
					printf("Lying Buffalo: %d\n", lyingBufallo);
					printf("Old Buffalo: %d\n", oldBuffalo);
					printf("=======================\n");
				}
			}
		}
	}
	getch();
}
