#include <stdio.h>
#include <conio.h>
#include <string.h>

char *docCumBaSo(long n) {
	char chuSo[10][10] = {"", "Mot ", "Hai ", "Ba ", "Bon ", "Nam ", "Sau ", "Bay ", "Tam ", "Chin "};
	char *doc = new char[100];
	int unit, ten, hundred;
	doc [0] = 0;
	hundred = (n/100);
	ten = (n/10)%10;
	unit = n%10;
	if (n == 0) strcat(doc, chuSo[0]);
	if (hundred > 0) {
		strcat(doc, chuSo[hundred]);
		strcat(doc, "Tram ");
	}
	if (ten > 0) {
		if (ten == 1) {
			strcat(doc, "Muoi ");
		}
		else {
			strcat(doc, chuSo[ten]);
			strcat(doc, "Muoi ");
		}
	}
	if (unit > 0) {
		if (ten == 0 && hundred != 0)
			strcat(doc, "Le ");
		if (unit == 1 && ten != 0)
			strcat(doc, "Mot ");
		else if (unit == 5 && ten !=0)
			strcat(doc, "Lam ");
		else 
			strcat(doc, chuSo[unit]);
	}
	return doc;
}

char *convertToWords(long n) {
	char hang[2][10] = {"Trieu ", "Nghin "};
	char *doc = new char[100];
	int mil, thous, units;
	doc[0] = 0;
	if (n == 0) strcat (doc, "Khong ");
	if (n < 0){
		strcat(doc, "Tru ");
		n = -n;
	} 
	units = n%1000;
	n /= 1000;
	thous = n%1000;
	mil = n/1000;
	if (mil > 0) {
		strcat(doc, docCumBaSo(mil));
		strcat(doc, hang[0]);
	}
	if (thous > 0) {
		if (mil> 0 && thous < 100)
			strcat(doc, "Khong Tram ");
		strcat(doc, docCumBaSo(thous));
		strcat(doc, hang[1]);
	}
	if (units > 0) {
		if (thous > 0 && units < 100)
			strcat(doc, "Khong Tram ");
		strcat(doc, docCumBaSo(units));
	}
	return doc;
}

int main() {
	long n;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("%s", convertToWords(n));
	getch();
}
