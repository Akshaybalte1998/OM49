/*
 ============================================================================
 Name        : Day1_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//int val;//declaration of variable
	int num=20; //declaration and initialization of variable num1
	float f_val=30.10;
	char ch='A';//assigned A value to character ch
	/*
	%d -> int
	%c -> char
	%f -> float
	 */
	printf("Number Value = %d Float Value = %f Char Value=%c",num,f_val,ch);
	//finding the address using & operator
	//%u is format specifier to display address
	printf("\n Address of Number=%u",&num);
	printf("\n Address of Float Variable=%u",&f_val);
	printf("\n Address of Character=%u",&ch);

	//sizeof() returns number of bytes of memory allocation
	printf("\n Size of Num=%d",sizeof(num));
	printf("\n Size of flaot variable=%d",sizeof(f_val));
	printf("\n Size of Char value = %d",sizeof(ch));

	return EXIT_SUCCESS;
}
