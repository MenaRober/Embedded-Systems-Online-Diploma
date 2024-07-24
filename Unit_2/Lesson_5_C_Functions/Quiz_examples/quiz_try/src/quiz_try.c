/*
 ============================================================================
 Name        : quiz_try.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fun1(int x);
int main(void) {
	int i,j;
	fflush(stdin);fflush(stdout);
	scanf("%d", &i);
	j=fun1(i);
	printf("%d ", j);
	return 0;
}
int fun1(int x){
	if(x%3==0 && x!=3)
		return 0;
	else
		return 1;
}
