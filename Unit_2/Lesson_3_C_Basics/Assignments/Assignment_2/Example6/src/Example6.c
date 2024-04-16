/*
 ============================================================================
 Name        : Example6.c
 Author      : Mena Rober
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,i;
	int sum = 0;
	printf("Enter an Integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &x);
	for(i=1, sum = 0; i<=x; i++){
		sum+=i;
	}
	printf("Sum = %d", sum);
	return 0;
}
