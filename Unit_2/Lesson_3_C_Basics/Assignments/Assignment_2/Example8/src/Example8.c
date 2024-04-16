/*
 ============================================================================
 Name        : Example8.c
 Author      : Mena Rober
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	float y,z;
	float sum = 0; float minus = 0; float multiply = 0; float divide = 0;
	printf("Enter an Operator either + or - or * or divide :");
	fflush(stdin);fflush(stdout);
	scanf("%c", &x);
	printf("Enter Two Operands:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f", &y, &z);
	if (x =='+'){
		sum = y + z;
		printf("%.1f + %.1f = %.1f", y, z, sum);
	}
	else if (x =='-'){
		minus = y - z;
		printf("%.1f - %.1f = %.1f", y, z, minus);
	}
	else if (x =='*'){
		multiply = y * z;
		printf("%.1f * %.1f = %.1f", y, z, multiply);
	}
	else if (x =='/'){
		divide = y / z;
		printf("%.1f / %.1f = %.1f", y, z, divide);
	}
	return 0;
}
