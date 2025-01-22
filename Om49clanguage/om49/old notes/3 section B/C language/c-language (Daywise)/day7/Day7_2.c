/*
 ============================================================================
 Name        : Day7_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright noticeb
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int val=60;
	int *iptr;
	iptr=&val; //pointer is holding the address of val variable which is int

	printf("\n Before :");
	printf("&VAL=%u IPTR=%u &IPTR=%u val=%d *IPTR=%d",&val,iptr,&iptr,val,*iptr);

	*iptr=80;//changing the value of int variable using pointer

	printf("\n After :");
	printf("&VAL=%u IPTR=%u &IPTR=%u val=%d *IPTR=%d",&val,iptr,&iptr,val,*iptr);



	return EXIT_SUCCESS;
}
