/*
 ============================================================================
 Name        : quiz_try5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(int arr[], int n);
int main(void) {
	int n, i;
	int values[100];
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);
	for (i=0; i<n; ++i){
		fflush(stdin);fflush(stdout);
		scanf("%d", &values[i]);
	}
	reverse(values, n);
	return 0;
}

void reverse(int arr[], int n){
	int rev[100];
	int i,f;
	f=n;
	for (i=0; i<f; ++i){
		rev[i]= arr[n-1];
		printf("%d, ", rev[i]);
		--n;
	}
}
