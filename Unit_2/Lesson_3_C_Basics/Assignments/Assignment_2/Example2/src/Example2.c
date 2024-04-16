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
	char x;
	printf("Enter an Alphabet:");
	fflush(stdin);fflush(stdout);
	scanf("%c", &x);
	if(x =='a' || x =='A' || x =='e' || x =='E'|| x == 'o'|| x == 'O'|| x == 'u'|| x == 'U'|| x == 'i'|| x == 'I')
		printf("%c is a Vowel", x);
	else
		printf("%c is a consonant", x);
	return 0;
}
