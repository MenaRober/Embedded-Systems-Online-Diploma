/*
 ============================================================================
 Name        : quiz_try6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int arr1[], int n1, int arr2[], int n2);

int main(void) {
	int arr1[101],arr2[101];
	int n1,n2,i;
	do{
		printf("please enter size of array 1 (max 100): ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &n1);
		if (n1>=100 || n1<1)
			printf("max 100! Try again \r\n");
	}while (n1>=100 || n1<1);

	do{
		printf("please enter size of array 2 (max 100): ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &n2);
		if (n2>=100 || n2<1)
			printf("max 100! Try again \r\n");
	}while (n2>=100 || n2<1);

	printf("please enter array 1:\r\n");
	for(i=0;i<n1;++i){
		printf("element %d: ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d", &arr1[i]);
	}

	printf("please enter array 2:\r\n");
	for(i=0;i<n2;++i){
		printf("element %d: ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d", &arr2[i]);
	}

	printf("Array 1 before swap:\r\n");
	for(i=0;i<n1;++i){
		printf("element %d is: %d\r\n", i+1, arr1[i]);
	}

	printf("Array 2 before swap:\r\n");
	for(i=0;i<n2;++i){
		printf("element %d is: %d\r\n", i+1, arr2[i]);
	}

	swap(arr1, n1, arr2, n2);

	return 0;
}

void swap(int arr1[], int n1, int arr2[], int n2){
	int arr3[100], i;
	for(i=0;i<n1;++i){
		arr3[i]=arr1[i];
	}

	for(i=0;i<n2;++i){
		arr1[i]=arr2[i];
	}

	for(i=0;i<n1;++i){
		arr2[i]=arr3[i];
	}

	printf("Array 1 after swap:\r\n");
	for(i=0;i<n2;++i){
		printf("element %d is: %d\r\n", i+1, arr1[i]);
	}

	printf("Array 2 after swap:\r\n");
	for(i=0;i<n1;++i){
		printf("element %d is: %d\r\n", i+1, arr2[i]);
	}
}
