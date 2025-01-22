/*
 ============================================================================
 Name        : Day2_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)
{
	//INT_MIN and INT_MAX are constants defined in <limits.h> header file
	printf("\n limits of int = %d to %d",INT_MIN,INT_MAX);
	int num=2147483649;
	//num value is going out of range of INT_MAX so the out put is -2147483647
	//As the range of int is from -2147483648 to 2147483647
	printf("\n Num=%d",num);
	return 0;
}


/*
int main(void) {

	char ch_sig=129;// by defualt each char variable is signed char
	//signed char (-128 to 127)
	printf("\n %d",ch_sig);

	unsigned char ch_unsig=257;
	//unsigned char range (0 to 255)
	printf("\n %d",ch_unsig);

	return EXIT_SUCCESS;
}
*/
