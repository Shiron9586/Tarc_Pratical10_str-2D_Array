#include<stdio.h>
#include<stdlib.h>
#inlcude<string.h>
#pragma warning(disable:4996)

void main() {
	char password[31] = {""};
	char pass[31] = { "jimmy2052" };
	do {

	printf("Please enter your pasword > ");
	rewind(stdin);
	scanf("%[^\n]", password);
   
	
		if (strcmp(password, pass) == 0)
			printf("\nWWELCOME TO PCD1 !\n");
		else
			printf("\nACCESS DENIED!\n");
	} while (strcmp(password, pass) > 0 || strcmp(password, pass) < 0);
}
