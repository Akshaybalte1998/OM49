/*
 ============================================================================
 Name        : Day10_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str1[10]="Sunbeam";
	char str2[10]="Sunbeam";

	if(str1==str2)
		printf("\n Strings are same");
	else
		printf("\n Strings are not same");

	char *str3="Sunbeam";
	char *str4="Sunbeam";
	if(str3==str4)
			printf("\n Strings are same");
		else
			printf("\n Strings are not same");


	return EXIT_SUCCESS;
}
