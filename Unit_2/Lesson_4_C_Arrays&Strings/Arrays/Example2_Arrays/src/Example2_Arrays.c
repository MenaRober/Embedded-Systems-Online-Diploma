/*
 ============================================================================
 Name        : Example2_Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=0;
	int i=0;
	float sum =0.0;
	float average =0.0;
	float numbers[100];
	printf("Enter the number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);
	while (n>100 || n<=0){
		printf("Non-Valid number of data, Number should be in Range (1-100) \n");
		printf("Try another Number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &n);
		continue;
	}
	for(i=0;i<n;i++){
		printf("enter Number %d: ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &numbers[i]);
		sum += numbers[i];
	}
	average = sum/n;
	printf("The average is: %0.2f", average);
	return 0;
}
