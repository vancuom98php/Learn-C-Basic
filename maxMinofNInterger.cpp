#include <stdio.h>
#include <conio.h>

void maxNumber(int *a, int *max) {
	if (*a > *max) *max = *a;
}

void minNumber(int *a, int *min) {
	if (*a < *min) *min = *a;
}

int main() {
	int n, i, a, max, min;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Bat dau nhap cac so:\n");
	scanf("%d", &a);
	max = a;
	min = a;
	for (i=2; i<=n; i++) {
		scanf("%d", &a);
		maxNumber(&a, &max);
		minNumber(&a, &min);
	}
	printf("Max: %d\n", max);
	printf("Min: %d", min);
	getch();
}
