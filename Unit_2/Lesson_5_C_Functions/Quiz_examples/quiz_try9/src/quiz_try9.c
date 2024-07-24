/*
 ============================================================================
 Name        : quiz_try9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int char_to_uint(char c);
unsigned int arr_to_uint(char ch[], unsigned int n1);

int main(void) {
	char ch[101];
	unsigned int i, n, j;
	do{
		printf("please enter size of array (max 100): ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &n);
		if (n>=100 || n<1)
			printf("max 100! Try again \r\n");
	}while (n>=100 || n<1);

	printf("please enter the array: ");
	for(i=0; i<n; ++i){
		fflush(stdin);fflush(stdout);
		scanf("%c", &ch[i]);
		if (ch[i]>=0x39 || ch[i]<0x30){
			printf("numbers from 0 to 9 only \r\n");
			return 0;
		}
	}


	printf("array to integer:\r\n");
	j = arr_to_uint( ch, n);
	printf("integer is: %u ", j);
	return 0;
}

unsigned int char_to_uint(char c){
	return (c - '0');
}

unsigned int arr_to_uint(char ch[], unsigned int n1){
	unsigned int total =0, n;
	int i;
	for(i=0; i<n1; ++i){
		total *= 10;
		n = ch[i]-'0';
		total+=n;
	}
	return total;
}
