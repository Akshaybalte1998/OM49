/*
 ============================================================================
 Name        : Day6_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//we can not declare register variable before main
//register int reg_val*=300; //error: register name not specified

int main(void) {


	register int reg_a=40; //define register value at the time of declaration
	printf("%d",reg_a);

	//printf("Enter the value of register variable");
	//scanf("%d",&reg_a); // Error: address of register variable
	// not allowed as we can not apply address variable on register variables
	return EXIT_SUCCESS;
}
