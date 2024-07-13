/*
 ============================================================================
 Name        : Example1_Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float Matrix_a[2][2];
	float Matrix_b[2][2];
	float Matrix_sum[2][2];
	int r,c;
	printf("Enter the elements of the 1st Matrix \n");
	for (r=0; r<2; r++){
		for (c=0; c<2; c++){
			printf("Enter a%d%d: ", r+1, c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f", &Matrix_a[r][c]);
		}
	}
	printf("Enter the elements of the 2nd Matrix \n");
	for (r=0; r<2; r++){
		for (c=0; c<2; c++){
			printf("Enter b%d%d: ", r+1, c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f", &Matrix_b[r][c]);
		}
	}
	for (r=0; r<2; r++){
		for (c=0; c<2; c++){
			Matrix_sum[r][c] = Matrix_a[r][c] + Matrix_b[r][c];
		}
	}
	printf("Sum of the Matrix: \n");
	for (r=0; r<2; r++){
		for (c=0; c<2; c++){
			printf("%0.1f\t", Matrix_sum[r][c]);
		}
		printf("\r\n");
	}
	return 0;
}
