#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning (disable:4996)

void main() {
	int data[4][5] = { {50,80,100,60,35},{60,120,90,70,50},{70,100,110,60,60},{60,85,80,75,55} };
	int programme[4] = {0}, campus[5] = {0};
	int totalstudent=0;

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			programme[row] += data[row][col];
			campus[col] += data[row][col];
			totalstudent += data[row][col];
		}
	}

	for (int col = 0; col < 5; col++) {
		printf("The total student in campus %c:  %4d\n", 'A' + 1, campus[col]);
	}

	for (int row = 0; row < 4; row++) {
		printf("The total student in Programme %d:  %4d\n", row+1, programme[row]);
	}

	printf("\n  The grand total: %d", totalstudent);
	
}