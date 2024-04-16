/*
 ============================================================================
 Name        : Example7.c
 Author      : Mena Rober
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,i;
	int factorial = 0;
	printf("Enter an Integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &x);
	if (x<0)
		printf("Error!!! Factorial of negative number doesn't exist.");
	else if (x>0){
		for(i=1, factorial = 1; i<=x; i++){
			factorial = factorial*i;
		}
		printf("Factorial = %d", factorial);
	}
	else
		printf("Factorial of Zero is 1");
	return 0;
}
