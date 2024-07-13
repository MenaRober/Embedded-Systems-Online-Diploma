/*
 ============================================================================
 Name        : Example3_Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Matrix[10][10];
	int transpose[10][10];
	int r,c,n,m;
	printf("Enter the no of rows and columns of the Matrix consecutively: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &r);
	fflush(stdin);fflush(stdout);
	scanf("%d", &c);
	printf("Enter the elements of the Matrix \n");
	for (n=0; n<r; n++){
		for (m=0; m<c; m++){
			printf("Enter a%d%d: ", n+1, m+1);
			fflush(stdin);fflush(stdout);
			scanf("%d", &Matrix[n][m]);
		}
	}

	for (n=0; n<r; n++){
		for (m=0; m<c; m++){
			transpose[m][n] = Matrix[n][m];
		}
	}

	printf("The entered Matrix: \n");
	for (n=0; n<r; n++){
		for (m=0; m<c; m++){
			printf("%d\t", Matrix[n][m]);
		}
		printf("\r\n");
	}

	printf("Transpose of the Matrix: \n");
	for (n=0; n<c; n++){
		for (m=0; m<r; m++){
			printf("%d\t", transpose[n][m]);
		}
		printf("\r\n");
	}
	return 0;
}
