/*
 ============================================================================
 Name        : Example5_Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,j,s;
	int number[100];
	printf("Enter the no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);
	for(j=0;j<n;j++){
		fflush(stdin);fflush(stdout);
		scanf("%d", &number[j]);
	}
	printf("\r\n");
	printf("Enter the elements to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &s);
	for(j=0;j<n;j++){
		while(number[j] == s){
			printf("Number found at the Location : %d", j+1);
			break;
		}
	}
	return 0;
}
