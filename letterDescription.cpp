/*	Chuong trinh dem so tu 
	va so tu qua 8 ky tu
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

//	Ham dem so tu
int countWords(char *str) {
	int i, n, count;
	n = strlen(str);
	count = 0;
	if (str[0] != ' ') count++;
	for (i = 0; i < n-1; i++) {
		if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
			count++;
	}
	return count;
}

//	Ham dem so tu qua 8 ky tu
int countCharacter(char *str) {
	int i, n, j, countWord, countCharacter;
	n = strlen(str);
	countWord = 0;
	for (i = 0; i < n; i++) {
		countCharacter = 0;
		if (str[0] != ' ' || (str[i] == ' ' && str[i+1] != ' ')) {
			do {
				countCharacter++;
				i++;
			}
			while (str[i] != ' ');
			if (countCharacter > 8) countWord++;
			i--;
		}
	}
	return countWord;
}

int main() {
	char str[1000];
	printf("Nhap noi dung thu tin:\n");
	gets(str);
	printf("So tu                           : %d\n", countWords(str));
	printf("So tu co kich thuoc binh thuong : %d x 100 = %d dong\n", countWords(str)-countCharacter(str), (countWords(str)-countCharacter(str))*100);
	printf("So tu co kich thuoc > 8 ky tu   : %d x 150 = %d dong\n", countCharacter(str), countCharacter(str)*150);
	printf("Tong cong                       :          %d dong\n", (countWords(str)-countCharacter(str))*100 + countCharacter(str)*150);
	getch();
}
