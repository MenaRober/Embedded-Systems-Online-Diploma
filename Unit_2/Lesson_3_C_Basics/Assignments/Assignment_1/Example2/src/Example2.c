/*
 ============================================================================
 Name        : Example2.c
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
	printf("Enter an Integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &x );
	printf("You Entered: %d", x);
	return 0;
}
