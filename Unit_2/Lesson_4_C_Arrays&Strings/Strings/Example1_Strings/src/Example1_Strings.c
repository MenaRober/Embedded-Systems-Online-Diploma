/*
 ============================================================================
 Name        : Example1_Strings.c
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
	char ch;
	int i;
	int count=0;
	printf("Enter a String: ");
	fflush(stdin);fflush(stdout);
	gets(a);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &ch);
	for(i=0;a[i]!='\0';i++){
		if (ch==a[i])
			count++;
	}
	printf("Frequency of %c = %d", ch, count);
	return 0;
}
