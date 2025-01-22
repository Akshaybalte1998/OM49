/*
 ============================================================================
 Name        : Day4_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int i,j;
	for (i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}


/*
int main(void)
{
	int i=10;
	for(i=10;i<20;i++);
	printf("%4d",i);
}
*/


/*int main(void)
{
	int i;
	for(i=65;i<75;i++)
	printf("%d %c  ",i,i); //to print ascii values within the range from 65 to 75
}*/

/*

int main(void)
{
	int i=3;
	for(;i<=5;) //will go in infinite loop
		printf("%3d",i);
	return 0;
}
*/


/*int main(void) {

	int i;
	for(i=0;i<10;i++)
		printf("%4d",i);
	return EXIT_SUCCESS;
}*/
