/* Chuong trinh in ra n so fibonacci
*/

#include <stdio.h>
#include <conio.h>

int fibonacci(int n) {
	if (n == 0 || n == 1)
	return 1;
	else return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
	int n, i;
	printf("Nhap so luong fibonacci can in ra, n = ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("%d ", fibonacci(i));
	}
	getch();
}
