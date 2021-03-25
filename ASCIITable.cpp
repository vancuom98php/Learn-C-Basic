#include <stdio.h>
#include <conio.h>

int main() {
	int i;
	printf("\tASCII TABLE\n");
	printf("Dec\tHex\tChar\n");
	for (i = 0; i <= 127; i++)
		printf("%d\t%X\t%c\n", i, i, i);
	getch();
}
