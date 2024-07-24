/*
 ============================================================================
 Name        : Example2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int i);

int main(void) {
	int y;
	printf ("Please enter a Positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &y);
	printf ("Factorial of %d = %d ", y, factorial(y));
	return 0;
}

int factorial(int i){
	if (i!=1)
		return i*factorial(i-1);
}
