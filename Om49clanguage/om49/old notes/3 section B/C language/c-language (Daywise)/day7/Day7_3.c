/*
 ============================================================================
 Name        : Day7_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num=40;
	int *iptr; //declaration of one int pointer
	iptr=&num; //iptr is holding address  of num
	int **pptr; //declaration of pptr which is is pointer to pointer
	pptr=&iptr; //pptr is holding address of iptr

	printf("\n &Num=%u Num=%d",&num,num);
	printf("\n IPTR=%u &IPTR=%u *IPTR=%d",iptr,&iptr,*iptr);
	printf("\n PPTR=%u &PPTR=%u **PPTR=%d",pptr,&pptr,**pptr);

	*iptr=55;
	printf("\n Num=%d",num);

	**pptr=75;
	printf("\n Num=%d",num);

	printf("\n sizeof(iptr)=%d sizeof(pptr)=%d",sizeof(iptr),sizeof(pptr));




	return EXIT_SUCCESS;
}
