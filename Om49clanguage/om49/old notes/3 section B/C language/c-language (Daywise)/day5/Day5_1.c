/*
 ============================================================================
 Name        : Day5_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void display(); //function declaration
int main(void) {
	printf("\n Inside Main");
	display(); //function call
	printf("\n Back to main");
	display();
	display();
	printf("\n Exit from main");

	return EXIT_SUCCESS;
}

void display() //function definition
{
	printf("\n Inside the function");
}

