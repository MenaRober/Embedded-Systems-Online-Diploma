/*
 ============================================================================
 Name        : quiz_try8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int clear_specified_bit(int num, int n);

int main(void) {
	int num, n;

	/* Input number from user */
	printf("Enter any number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);

	/* Input bit number you want to clear */
	printf("Enter nth bit to clear (0-31): ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);
	--n;


	printf("Bit cleared successfully.\n\n");
	printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
	printf("Number after clearing %d bit: %d (in decimal)\n", n, clear_specified_bit(num, n));
	return 0;
}

int clear_specified_bit(int num, int n){
	int new_num;

	/*
	* Left shifts 1 to n times
	* Perform complement of above
	* finally perform bitwise AND with num and result of above
	*/

	new_num =num & (~(1 << n));
	return new_num;
}
