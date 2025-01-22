/*
 ============================================================================
 Name        : Day8_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num=50;
	int *iptr=&num;

	printf("%d %u",num,sizeof(iptr));

	return EXIT_SUCCESS;
}
