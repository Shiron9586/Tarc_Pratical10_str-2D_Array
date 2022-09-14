#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable:4996)


void main() {
	int data[4][5] = { {50,80,100,60,35},{60,120,90,70,50},{70,100,110,60,60},{60,85,80,75,55} };
	int studenta=0, studentb=0, studentc=0, studentd=0, studente=0;
	int student1=0, student2=0, student3=0, student4=0;
	int total=0;

	for (int b = 0; b < 5; b++) {

		if (b == 0)
			for (int i = 0; i < 4; i++) {
				studenta += data[i][b];
			}
		if(b==1)
			for (int i = 0; i < 4; i++) {
				studentb += data[i][b];
			}
		if (b == 2)
			for (int i = 0; i < 4; i++) {
				studentc += data[i][b];
			}

		if (b == 3)
			for (int i = 0; i < 4; i++) {
				studentd += data[i][b];
			}

		if (b == 4)
			for (int i = 0; i < 4; i++) {
				studente += data[i][b];
			}

	}
	for (int b = 0; b < 4; b++) {

		if (b == 0)
			for (int i = 0; i < 5; i++) {
				student1 += data[b][i];
			}
		if (b == 1)
			for (int i = 0; i < 5; i++) {
				student2 += data[b][i];
			}
		if (b == 2)
			for (int i = 0; i < 5; i++) {
				student3 += data[b][i];
			}

		if (b == 3)
			for (int i = 0; i < 5; i++) {
				student4 += data[b][i];
			}


	}
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			total += data[row][col];
		}
	}
	printf("Total students in Campus A:    %d\n", studenta);
	printf("Total students in Campus B:    %d\n", studentb);
	printf("Total students in Campus C:    %d\n", studentc);
	printf("Total students in Campus D:    %d\n", studentd);
	printf("Total students in Campus E:    %d\n", studente);
	printf("Total students in Programme 1:    %d\n", student1);
	printf("Total students in Programme 2:    %d\n", student2);
	printf("Total students in Programme 3:    %d\n", student3);
	printf("Total students in Programme 4:    %d\n", student4);
	printf("Grand Total (total students in the university): %d", total);
}
