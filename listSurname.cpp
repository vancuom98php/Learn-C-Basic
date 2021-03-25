#include <stdio.h>
#include <conio.h>
#include <string.h>

int countSurname(char name[10][100], char *surName) {
	int i, j, n, count;
	char firstName[200];
	count = 0;
	for (i = 0; i < 10; i++) {
		n = strlen(name[i]);
		firstName[0] = 0;
		for (j = 0; j < n; j++) {
			if (name[i][j] != ' ')
				firstName[j] = name[i][j];
			else break;
		}
		firstName[j] = '\0';
		if (strcmp(firstName, surName) == 0) count++;
	}
	return count;
}

int main() {
	char name[10][100] = {"Le Van A", "Le Nguyen Van B", "Nguyen Le Thi C", "Tran Thi Thuy D", "Nguyen Van E", "Ly Mai F"};
	char surName[100];
	printf("Nhap ho can thong ke: ");
	gets(surName);
	if (countSurname(name, surName) == 0)
		printf("Khong co nguoi ho \"%s\" trong list", surName);
	else
		printf("So luong ho \"%s\" trong list: %d", surName, countSurname(name, surName));
	getch();
}

