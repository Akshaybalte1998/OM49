/*
 ============================================================================
 Name        : Day7_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char ch='A';
	int num=255;

	char *cptr=&ch;
	cptr=&num;

	//cptr is designed to hold the address of character
	//we are storing address of integer variable
	//*cptr will derefer only one byte by default as cptr because
	// its scale factor is one byte as it is declared as char

	printf("\n cptr=%u *cptr=%d",cptr,*cptr);

	//*cptr will now derefer 4bytes as cptr is explicitly type casted
	//to address of int
	printf("\n cptr=%u *cptr=%d",cptr,*(int *)cptr);




	return EXIT_SUCCESS;
}
