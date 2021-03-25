#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

//	Khoi tao struct diem thi thi sinh
struct testScore {
	float math;
	float physical;
	float chemistry;
};


// Khoi tao struct ngay sinh cua thi sinh
struct birthday {
	int day;
	int month;
	int year;
};

// Struct cac thuoc tinh cua 1 thi sinh
struct students {
	char name[100];
	birthday birth;
	char school[100];
	char id[10];
	testScore score;
};


// Ham nhap diem tung mon cua tung thi sinh
testScore studentScore(students student[], int i) {
	testScore score;
	char temp1[10];
	char temp2[10];
	char temp3[10];
	printf("Nhap diem mon Toan: ");
	gets(temp1);
	student[i].score.math = atof(temp1);
	printf("Nhap diem mon Ly: ");
	gets(temp2);
	student[i].score.physical = atof(temp2);
	printf("Nhap diem mon Hoa: ");
	gets(temp3);
	student[i].score.chemistry = atof(temp3);
	return (student[i].score);
}

// Ham nhap ngay sinh cua tung thi sinh
birthday studentBirth(students student[], int i) {
	birthday birth;
	char temp1[10];
	char temp2[10];
	char temp3[10];
	printf("Sinh ngay: ");
	gets(temp1);
	student[i].birth.day = atoi(temp1);
	printf("thang: ");
	gets(temp2);
	student[i].birth.month = atoi(temp2);
	printf("nam: ");
	gets(temp3);
	student[i].birth.year = atoi(temp3);
	return (student[i].birth);
}

// Ham nhap tung thi sinh
students newStudent(students student[], int i) {
	printf("Ho ten hoc sinh: ");
	gets(student[i].name);
	studentBirth(student, i);
	printf("Truong: ");
	gets(student[i].school);
	printf("Nhap so bao danh: ");
	gets(student[i].id);
	printf("Diem 3 mon thi: \n");
	studentScore(student, i);
	return (student[i]);
}

// Ham nhap danh sach thi sinh
void input(students student[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Thi sinh %d: \n", i+1);
		student[i] = newStudent(student, i);
		printf("\n");
	}
}


//	Ham tinh tong diem cua thi sinh
float totalScore(students student[], int i) {
	return (student[i].score.math+student[i].score.physical+student[i].score.chemistry);
}

// Ham xuat ra cac thi sinh co diem thi tren 15
void outputOver15Score(students student[], int n) {
	for (int i = 0; i < n; i++) {
		if (totalScore(student, i) >= 15)
			printf("%s voi so diem: %.2f\n", student[i].name, totalScore(student, i));
	}
}

//	Chuong trinh chinh
int main() {
	students student[MAX];
	char temp[10];
	int n;
	printf("So luong thi sinh: ");
	gets(temp);
	n = atoi(temp);
	input(student, n);
	printf("Nhung thi sinh co diem tren 15\n");
	outputOver15Score(student, n);
	getch();
}
