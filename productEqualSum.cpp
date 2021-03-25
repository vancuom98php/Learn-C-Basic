#include <stdio.h>
#include <conio.h>

int productNumber(int n) {
	int product = 1;
	while (n>0) {
		product *= n%10;
		n /= 10;
	}
	return product;
}

int sumNumber(int n) {
	int sum = 0;
	while (n>0) {
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int main() {
	printf("Cac so co 3 chu so ma tich 3 chu so bang tong 3 chu so:");
	for (int i = 100; i < 1000; i++) {
		if (productNumber(i) == sumNumber(i))
			printf("\n%d", i);
	}
	getch();
}
