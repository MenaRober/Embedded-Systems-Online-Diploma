/*
 ============================================================================
 Name        : quiz_try7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, bits, bin;
	printf("please enter the number to check 4th least significant bit: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	printf("%d in binary is: ", num);
	for(bits=31; bits>=0; --bits){
		bin= num>>bits;
		if(bin & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	bin = num>>3;
	if(bin & 1)
		printf("The 4th least significant bit is 1");
	else
		printf("The 4th least significant bit is 0");
	return 0;
}
