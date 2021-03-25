#include <stdio.h>
#include <conio.h>
#include <string.h>

char *eraseString(char *str, int start, int quant) {
	int i, n, j;
	n = strlen(str);
	for (i = start-1; i < n; i++) {
		str[i] = str[i+quant];
	}
	return str;
}

int main() {
	char str[100];
	int start, quant;
	printf("Nhap chuoi: ");
	gets(str);
	printf("Muon xoa vi tri nao: ");
	scanf("%d", &start);
	printf("Muon xoa bao nhieu ky tu: ");
	scanf("%d", &quant);
	printf("%s", eraseString(str, start, quant));
	getch();
}

