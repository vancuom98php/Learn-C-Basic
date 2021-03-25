#include <stdio.h>
#include <conio.h>
#include <math.h>

bool check(int a, int b, int c, int d) {
	if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		return true;
	else return false;
}

int main() {
	int a, b, c, d;
	for (a = 0; a <= 10; a++) {
		for (b = 0; b<=10; b++) {
			for (c = 0; c <= 10; c++) {
				for (d = 0; d <= 10; d++) {
					if((a*pow(d, 2) == b*pow(c, 3)) && (check(a, b, c, d)))
					printf("%d*%d^2 = %d*%d^3\n", a, d, b, c);
				}
			}
		}
	}
	getch();
}
