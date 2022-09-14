#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

#pragma warning(disable:4996)

void main() {
	char sentence[81] = {""};
	int count=0;


	printf("Please write a sentence >");
	scanf("%[^\n]", &sentence);

	for (int i = 0; i < 81; i++) {


		if (sentence[i]==0) {
			++count;
			if (count <=3 && count>0) {
				printf("!");
			
			}
		}
		
		else
		printf("%c", toupper(sentence[i]));
		
	}
}

