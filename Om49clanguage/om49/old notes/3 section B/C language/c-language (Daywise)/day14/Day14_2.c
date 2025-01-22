/*
 ============================================================================
 Name        : Day14_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef union
{
		int percentage;
		char grade;
}TEST;

int main(void)
{

	TEST t;
	printf("\n Size of Union = %u",sizeof(t));
	printf("Elements of union are:");
	t.percentage=86;
	printf("\n Percentage : %d",t.percentage);
	t.grade='A';
	printf("\n GRADE=%c",t.grade);

	return EXIT_SUCCESS;
}
