/*
 ============================================================================
 Name        : Example1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime_numbers(int y);

int main(void) {
	int w, x, i, c, determine;
	do{
		printf("Enter Two numbers (intervals):");
		fflush(stdin);fflush(stdout);
		scanf("%d %d", &w, &x);
		if (x==w)
			printf("You can't add same number twice! Try again \r\n");
	} while(w==x);

	if (x<w){
		c=x;
		x=w;
		w=c;
	}

	printf("Prime numbers between %d and %d are:", w, x);
	for(i=w; i<=x; ++i){
		determine = prime_numbers(i);
		if (determine==0)
			printf ("%d ", i);
	}
	return 0;
}

int prime_numbers(int y) {
	int j, flag=0;
	for(j=2; j<=y/2; ++j){
		if(y%j==0){
			flag=1;
			break;
		}
	}
	return flag;
}
