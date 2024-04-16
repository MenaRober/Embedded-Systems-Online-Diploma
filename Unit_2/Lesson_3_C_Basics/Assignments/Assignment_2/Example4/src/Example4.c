/*
 ============================================================================
 Name        : Example4.c
 Author      : Mena Rober
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x;
	printf("Enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &x);
	if (x<0)
		printf("%f is negative", x);
	else if (x>0)
		printf("%f is positive", x);
	else
		printf("You entered a Zero");
	return 0;
}
