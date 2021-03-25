#include <stdio.h>
#include <conio.h>

void hollowSquare(int height, int width) {
	for (int i = 0; i < height; i++) {
		if (i==0 || i==height-1) {
			for (int j = 0; j < width; j++)
				printf(" * ");
			printf("\n");
		}
		else {
			for (int j = 0; j < width; j++) {
				if (j == 0 || j ==width-1)
					printf(" * ");
				else printf("   ");
			}
			printf("\n");
		}
	}
}

int main() {
	int height, width;
	printf("Nhap chieu dai: ");
	scanf("%d", &height);
	printf("Nhap chieu rong: ");
	scanf("%d", &width);
	hollowSquare(height, width);
	getch();
}
