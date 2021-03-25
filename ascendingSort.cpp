#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void burbleSort(int a[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (a[j] > a[j+1]) swap(&a[j], &a[j+1]);
		}
	}
} 

int main() {
	int n, i, a[n];
	printf("Nhap so luong phan tu cua mang, n = ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	burbleSort(a, n);
	for (i = 0; i < n; i++)
	printf("%d ", a[i]);
	getch();	
}

