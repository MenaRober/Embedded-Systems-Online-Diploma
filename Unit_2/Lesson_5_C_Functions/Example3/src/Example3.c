/*
 ============================================================================
 Name        : Example3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int reverse(char* z);

int main(void) {
	char hi[1000];
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	gets(hi);
	reverse(hi);
	return 0;
}

int reverse(char* z){
	if(*z!='\0'){
		reverse(z+1);
		printf("%c", *z);
	}
	return 0;
}
