/*
 ============================================================================
 Name        : Example4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int x, int y);

int main(void) {
	int i,p,b;
	printf("Enter a the base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &b);
	printf("Enter power number(Positive Integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &p);
	i = power(b, p);
	printf("%d ^ %d = %d", b, p, i);
	return 0;
}

int power(int x, int y){
	int z = 0;
	if (y!=0){
		z = power( x, y-1);
		z= x*z;
		return z;
	}
	else
		return 1;
}
