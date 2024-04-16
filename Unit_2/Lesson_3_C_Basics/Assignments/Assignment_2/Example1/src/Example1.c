/*
 ============================================================================
 Name        : Example1.c
 Author      : Mena Rober
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an Integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &x);
	if(x%2 == 0)
		printf("%d is Even", x);
	else
		printf("%d is Odd", x);
	return 0;
}
