/*	Tro choi keo bua bao
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int resultGame(int a, int b) {
	int result;
	switch(a) {
		case 1: switch(b) {
			case 1: result = 0;
					break;
			case 2: result = 2;
					break;
			case 3: result = 1;
					break;
			}
				break;
		case 2: switch(b) {
			case 1: result = 1;
					break;
			case 2: result = 0;
					break;
			case 3: result = 2;
					break;
			}
				break;
		case 3: switch(b) {
			case 1: result = 2;
					break;
			case 2: result = 1;
					break;
			case 3: result = 0;
					break;
			}
				break;
	}
	return result;
}

int main() {
	int a, b, att;
	char str[3][5] = {"Keo", "Bua", "Bao"};
	att = 1;
	
	while (att) {
		do {
			// Trang chu
			system("cls");
			printf("TRO CHOI OAN TU TI:\n");
			printf("1. Choi\n");
			printf("2. Thoat\n");
			scanf("%d", &att);
		}
		while (att !=1 && att != 2);
		
			//	Ket thuc tro choi
		if (att == 2) {
			system("cls");
			exit(1);
			getch();
		}
		else {
			//	Nguoi choi 1 chon
			do {
				system("cls");
				printf("TRO CHOI OAN TU TI:\n");
				printf("Moi nguoi choi 1 chon, nguoi 2 cut cho khac:\n");
				printf("1. Keo\n");
				printf("2. Bua\n");
				printf("3. Bao\n");
				scanf("%d", &a);
			}
			while (a<1 || a>3);
			
			//	Nguoi choi 2 chon
			do {
				system("cls");
				printf("TRO CHOI OAN TU TI:\n");
				printf("Moi nguoi choi 2 chon, nguoi 1 cut cho khac:\n");
				printf("1. Keo\n");
				printf("2. Bua\n");
				printf("3. Bao\n");
				scanf("%d", &b);
			}
			
			//In ra ket qua cuoc choi
			while (b<1 || b>3);
			system("cls");
			printf("TRO CHOI OAN TU TI:\n");
			printf("Nguoi choi 1 da ra %s\n", str[a-1]);
			printf("Nguoi choi 2 da ra %s\n", str[b-1]);
			printf("Ket qua:\n");
			if (resultGame(a, b) == 1) printf("Nguoi choi 1 thang\n");
			else if (resultGame(a, b) == 2) printf("Nguoi choi 2 thang\n");
			else printf("Ca 2 nguoi choi hoa\n");
			printf("Nhan phim bat ky de quay ve trang chu");
			getch();
		}
	}
	getch();
}
