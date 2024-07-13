/*
 ============================================================================
 Name        : Example3_Strings.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char a[2000];
	char rev[2000];
	int i;
	int m,o;
	printf("Enter a String: ");
	fflush(stdin);fflush(stdout);
	gets(a);

	m= strlen(a)-1;
	o= strlen(a);
	rev[o]='\0';

	for(i=0; a[i]!='\0'; i++){
		rev[m]=a[i];
		m--;
	}

	printf("Reverse String is: %s", rev);
	return 0;
}
