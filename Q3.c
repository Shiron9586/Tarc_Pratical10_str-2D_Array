#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#pragma warning(disable:4996)

void main() {
	char msg[] = "Cry OR Try OR Die Trying";
	int count = 0;

	for (int i = 0; i < 100; i++) //also can use strlen(msg) for the condition
	{
		if (msg[i] == 'r' || msg[i]=='R')
		count++;
		if (msg[i] == '\0')
			break;
	}
	printf("The number of character 'r' is > %d", count);

}
