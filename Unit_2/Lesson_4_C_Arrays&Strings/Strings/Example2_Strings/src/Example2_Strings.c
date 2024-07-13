/*
 ============================================================================
 Name        : Example2_Strings.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[2000];
	int i;
	int count=0;
	printf("Enter a String: ");
	fflush(stdin);fflush(stdout);
	gets(a);
	for(i=0; a[i]!='\0'; i++){
		count++;
	}
	printf("Length of String: %d", count);
	return 0;
}
