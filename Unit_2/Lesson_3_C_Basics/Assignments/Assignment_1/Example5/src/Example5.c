/*
 ============================================================================
 Name        : Example5.c
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
	printf("Enter a Character:");
	fflush(stdin);fflush(stdout);
	scanf("%c", &x);
	printf("ASCII value of %c = %d", x, x);
	return 0;
}
