/* Chuong trinh tim thu khi biet ngay thang nam
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

bool checkYear(int yy) {
	if (yy<0) return false;
	else return true;
}

bool checkMonth(int mm) {
	if (mm<1 || mm>12) return false;
	else return true;
}

bool leapYear(int yy) {
	if ((yy%400 == 0) || (yy%4 == 0 && yy%100 != 0)) return true;
	else return false;
}

bool checkDate(int dd, int mm, int yy) {
	bool check = true;
	if (dd<1) check = false;
	if (mm==2) {
		if (leapYear(yy) == true && dd>29) check = false;
		else if (leapYear(yy) == false && dd>28) check = false;
	}
	else if ((mm==1 || mm==3|| mm==5 || mm==7 || mm==8 || mm==10 || mm==12) & (dd>31)) check = false;
	else if ((mm==4 || mm==6 || mm==9 || mm==11) && (dd>30)) check = false;
	return check;
}

void dayOfWeek(int dd, int mm, int yy) {
	int day;
	if(mm < 3) {
        mm = mm + 12;
        yy = yy - 1;
    }
    day = (abs( dd + 2*mm + 3*(mm + 1)/5 + yy + yy/4) % 7 ); 
    switch(day) {
    	case 1:
    		printf("Monday");
    		break;
    	case 2:
    		printf("Tuesday");
    		break;
    	case 3:
    		printf("Wednesday");
    		break;
    	case 4:
    		printf("Thursday");
    		break;
    	case 5:
    		printf("Friday");
    		break;
    	case 6:
    		printf("Saturday");
    		break;
    	case 0:
    		printf("Sunday");
    		break;
    }
}

int main() {
	int dd, mm, yy;
	do {
		printf("Nhap ngay: ");
		scanf("%d", &dd);
		if (checkDate(dd, mm, yy) == false)
		printf("Oc\n");
	}
	while (checkDate(dd, mm, yy) == false);
	do {
		printf("Nhap thang: ");
		scanf("%d", &mm);
		if (checkMonth(mm) == false)
		printf("Oc\n");
	}
	while (checkMonth(mm) == false);
	do {
		printf("Nhap nam: ");
		scanf("%d", &yy);
		if (checkYear(yy) == false)
		printf("Oc\n");
	}
	while (checkYear(yy) == false);
	if (checkDate(dd, mm, yy) == false) {
		printf("Oc\n");
 		exit(0);
 	}
	printf("==========> ");
	dayOfWeek(dd, mm, yy);
	getch();
}


