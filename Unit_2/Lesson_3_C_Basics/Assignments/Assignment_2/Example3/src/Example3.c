/*
 ============================================================================
 Name        : Example3.c
 Author      : Mena Rober
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,z;
	printf("Enter Three Numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f", &x, &y, &z );
	if(x > y){
		if(x > z){
			printf("Largest number is %.2f", x);
		}
		else
			printf("Largest number is %.2f", z);
	}
	else if(y > x){
		if(y > z){
			printf("Largest number is %.2f", y);
		}
		else
			printf("Largest number is %.2f", z);
	}
	return 0;
}
