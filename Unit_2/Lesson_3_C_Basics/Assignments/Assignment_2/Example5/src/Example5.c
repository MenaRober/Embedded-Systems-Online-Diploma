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
	if (x >='a' && x <='z'||x >='A' && x <='Z')
		printf("%c is an Alphabet", x);
	else
		printf("%c is not an Alphabet", x);
	return 0;
}
