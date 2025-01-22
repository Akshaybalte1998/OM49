/*
 ============================================================================
 Name        : Day6_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void test_static(); //function declaration

int main(void) {
	int value=10; //auto variable
	printf("Inside Main : ");
	printf("Value=%d",value);
	test_static(); //function call
	test_static();
	test_static();

	return EXIT_SUCCESS;
}


void test_static() //function definition
{
	//int var=50;
	//static int newval=var; //error: initializer element is not constant

	static int sval=100;
	printf("\n Value of Static Variable = %d",sval);
	sval++;

	//static members are intitialized at the time of declaration only
	static int temp;//spoil the nature of static
	temp=10;
	temp++;
	printf("\n Temp=%d",temp);

}

