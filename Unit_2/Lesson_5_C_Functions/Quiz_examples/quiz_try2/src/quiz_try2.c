/*
 ============================================================================
 Name        : quiz_try2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int comp(char user[], char to_check[]);

int main(void) {
	char i[100]="mena rober";
	char ch[100];
	printf("Please enter username: ");
	fflush(stdin);fflush(stdout);
	gets(ch);
	if (comp(i,ch)==1)
		printf("Identical");
	else if (comp(i,ch)==0)
		printf("Not-Identical");
	return 0;
}

int comp(char user[], char to_check[]){
	int a;
	for (a=0; user[a]!='\0' || to_check[a]!='\0'; ++a){
		if(user[a]!=to_check[a])
			break;
	}
	if (user[a]=='\0' && to_check[a]=='\0')
		return 1;
	return 0;
}
