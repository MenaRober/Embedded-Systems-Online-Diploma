/*
 ============================================================================
 Name        : Example4_Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,j,i,l;
	int number[100];
	printf("Enter the no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);
	for(j=0;j<n;j++){
		fflush(stdin);fflush(stdout);
		scanf("%d", &number[j]);
	}
	printf("\r\n");
	printf("Enter the elements to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &i);
	printf("Enter the Location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &l);
	/*for(j=0;j<n;j++){
		while(j == l-1){
			printf("%d\t", i);
			l=-10;
		}
		printf("%d\t", number[j]);
	}*/
	for(j=n;j>=l;j--){
		number[j] = number[j-1];
	}
	n++;
	number[l-1]=i;
	for(j=0;j<n;j++){
		printf("%d\t", number[j]);
	}
	return 0;
}
