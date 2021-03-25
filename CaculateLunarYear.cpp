#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char chi[12][10] = {"Ty\'", "Suu", "Dan", "Meo", "Thin", "Ty.", "Ngo", "Mui", "Than", "Dau", "Tuat", "Hoi"};
	char can[10][10] = {"Giap", "At", "Binh", "Dinh", "Mau", "Ky", "Canh", "Tan", "Nham", "Quy"};
	char tuoi[12][10];
	int year;
	printf("Nhap nam duong lich: ");
	scanf("%d", &year);
	printf("Nam am lich la: %s %s\n", can[(year+6)%10], chi[(year+8)%12]);
	printf("Tam hop: %s, %s, %s\n", chi[(year+8)%12], chi[(year+8+4)%12], chi[(year+8+8)%12]);
	printf("Tu hanh xung: %s, %s, %s, %s", chi[(year+8)%12], chi[(year+8+3)%12], chi[(year+8+6)%12], chi[(year+8+9)%12]);
	getch();	
}
