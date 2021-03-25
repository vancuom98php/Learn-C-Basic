#include <stdio.h>
#include <conio.h>

int populationFuture(long populationNow, int moreYear) {
	if (moreYear == 1) return populationNow*1.8;
	else return populationFuture(populationNow, moreYear-1)*1.8;
}

int main() {
	long populationNow;
	int moreYear;
	printf("Nhap so dan hien tai: ");
	scanf("%d", &populationNow);
	printf("Nhap so nam: ");
	scanf("%d", &moreYear);
	printf("%d", populationFuture(populationNow, moreYear));
	getch();
}
