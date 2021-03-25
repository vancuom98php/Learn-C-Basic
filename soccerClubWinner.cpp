#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

struct soccerClub {
	char name[30];
	int win;
	int lose;
	int deuce;
};

soccerClub newClub() {
	soccerClub club;
	char temp1[30];
	char temp2[30];
	char temp3[30];
	printf("Ten doi bong: ");
	gets(club.name);
	printf("So tran thang: ");
	gets(temp1);
	club.win = atoi(temp1);
	printf("So tran thua: ");
	gets(temp2);
	club.lose = atoi(temp2);
	printf("So tran hoa: ");
	gets(temp3);
	club.deuce = atoi(temp3);
	return (club);
}

void input(soccerClub club[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Doi bong thu %d:\n", i+1);
		club[i] = newClub();
		printf("\n");
	}
}

int score(soccerClub club[], int i) {
	return (club[i].win*3 + club[i].deuce);
}

int maxScore(soccerClub club[], int n) {
	int max = score(club, 0);
	for (int i = 1; i < n; i++) {
		if (max < score(club, i))
			max = score(club, i);
	}
	return max;
}

char *winner(soccerClub club[], int n) {
	char *team = new char[30];
	team[0] = 0;
	for (int i = 0; i < n; i++) {
		if (maxScore(club, n) == score(club, i))
		strcat(team, club[i].name);
	}
	return team;
}

int main() {
	soccerClub club[MAX];
	char temp[30];
	int i, n;
	printf("Nhap vao so doi bong cua giai dau: ");
	gets(temp);
	n = atoi(temp);
	input(club, n);
	printf("Doi vo dich la %s voi so diem %d", winner(club, n), maxScore(club, n));
	getch();
}
