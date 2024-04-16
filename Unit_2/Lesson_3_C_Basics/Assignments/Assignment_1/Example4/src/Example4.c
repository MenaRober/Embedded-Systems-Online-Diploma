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
	float x,y;
	float product;
	printf("Enter Two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f", &x, &y );
	product = x * y;
	printf("Product= %f", product);
	return 0;
}
