#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#pragma warning(disable:4996)

void main() {
	int arra[2][4];
	int max=0, small = 0;


	for (int i = 0; i < 2; i++) {

		for (int b = 0; b < 4; b++) {
			printf("Please input a value > ");
			scanf("%d", &arra[i][b]);
		}
	}

	  for (int i = 0; i < 2; i++) {
		  if (i == 1)
			  printf("\n");
		  for (int b = 0; b < 4; b++) {
			  printf("%d ", arra[i][b]);
			  
		  }
		}
		small = arra[0][0];
		for (int i = 0; i < 2; i++) {

			for (int b = 0; b < 4; b++) {
				if (arra[i][b] < small)
					small = arra[i][b];
				
			}
		}

		max = arra[0][0];
		for (int i = 0; i < 2; i++) {

			for (int b = 0; b < 4; b++) {
				if (arra[i][b] > max)
					max = arra[i][b];

			}
		}

		printf("\nThe largest value is %d, the smallest value is %d", max, small);
	}
