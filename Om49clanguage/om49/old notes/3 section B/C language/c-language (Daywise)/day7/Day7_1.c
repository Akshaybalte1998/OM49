/*
 ============================================================================
 Name        : Day7_1.c
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
	int *iptr;//pointer declaration of type int
	iptr=&num; //we are storing address of num in iptr

	printf("\n Num=%d \t &Num=%u",num,&num);

	//iptr will store the address of num
	//&iptr is pointer's own address
	//*iptr is value/contents at the address/location pointed by pointer
	printf("\n IPTR=%u \t &IPTR=%u \t *IPTR=%d",iptr,&iptr,*iptr);

	printf("\n Size(num)=%d   size(iptr)=%d",sizeof(num),sizeof(iptr));

	char ch='A';
	char *chptr; //declaration of char pointer
	chptr=&ch; //it stores address of ch

	printf("\n Value at Char=%c Address=%u",ch,&ch);
	printf("\n CHPTR=%u \t &CHPTR=%u \t *CHPTR=%c",chptr,&chptr,*chptr);
	printf("\n Size(ch)=%d size(chptr)=%d",sizeof(ch),sizeof(chptr));




	return EXIT_SUCCESS;
}
