/*
 ============================================================================
 Name        : quiz_try4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int last_occ(int values[], int n, int x);

int main(void) {
	int i[7]={1,2,3,4,5,6,4};
	int j, res;
	fflush(stdin);fflush(stdout);
	scanf("%d", &j);
	res = last_occ(i, 7, j);
	printf("the index is %d ", res);
	return 0;
}

int last_occ(int values[], int n, int x){
	for (n =6; n>=0; --n){
		if(values[n] == x)
			return n;
	}
	return -1;
}
