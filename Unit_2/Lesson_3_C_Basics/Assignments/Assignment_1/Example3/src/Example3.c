/*
 ============================================================================
 Name        : Example3.c
 Author      : Mena Rober
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	int sum;
	printf("Enter Two Integers:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &x, &y );
	sum = x + y;
	printf("Sum= %d", sum);
	return 0;
}
