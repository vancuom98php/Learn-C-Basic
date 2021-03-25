#include <stdio.h>
#include <conio.h>

void solidTriangle(int h) {
	int i, j, k;
	k = 1;
	while (h>0) {
		for (i=1; i < h; i++) printf("   ");
		for (j=1; j<= k; j++) printf(" * ");
		printf("\n");
		h--;
		k+=2;
	}
}

void hollowTriangle(int h) {
	int i, j, k;
	k = h-1;
	for (i=0; i < h-1; i++) {
		for (j=0; j < 2*h-1; j++) {
			if (j == k-i || j == k+i)
				printf(" * ");
			else printf ("   ");
		}
		printf("\n");
	}
	for (j = 0; j < 2*h-1; j++) printf(" * ");
}

int main() {
	int h;
	int i, j, k;
	printf("Nhap chieu cao tam giac, h= ");
	scanf("%d", &h);
	printf("Tam giac dac\n\n");
	solidTriangle(h);
	printf("\n\nTam giac rong\n\n");
	hollowTriangle(h);
	getch();
}
