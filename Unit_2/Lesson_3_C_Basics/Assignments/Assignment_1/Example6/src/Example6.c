/*
 ============================================================================
 Name        : Example6.c
 Author      : Mena Rober
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &b);
	printf("After swapping, value of a = %f", b);
	printf("\n\rAfter swapping, value of b = %f", a);
	return 0;
}
