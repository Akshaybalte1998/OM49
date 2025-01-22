/*
 ============================================================================
 Name        : Day9_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num=30;
	void *vptr=NULL; //void pointer or generic pointer
	vptr=&num;

	//if we are using void pointer then we need to compulsory typecast the void pointer
	//in the same data type where it is dereferencing
	printf("\n Num=%d num =%u *vptr=%d VPTR=%u",num,&num,*(int *)vptr,vptr);


	char ch='A';
	vptr=&ch;
	printf("\n Char=%c *vptr=%c",ch,*(char *)vptr);


	void *gptr;
	//ptr is generic pointer , ready to hold address of any location
	//but do not aware of scale factor of location to which it is pointing to
	//hence we need to typecast alwyas before its use

	float f=20.5;
	gptr=&f;
	printf("\n Float Val=%f *gptr=%f",f,*(float *)gptr); //typecast the pointer



	return EXIT_SUCCESS;
}
