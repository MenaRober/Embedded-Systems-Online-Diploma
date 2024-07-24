/*
 ============================================================================
 Name        : quiz_try3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fourth_least_sig(int x);
int main(void) {
	int i,j;
	fflush(stdin);fflush(stdout);
	scanf("%d", &i);
	j = fourth_least_sig(i);
	printf("the fourth least significant bit is %d ", j);
	return 0;
}
int fourth_least_sig(int x){
	int i;
	if(x>4294967296){
		x= x%4294967296;
	}
	for(i=0;i<=x;++i){

	}
	if(x%8==0)
		return 1;
	else
		return 0;
}
