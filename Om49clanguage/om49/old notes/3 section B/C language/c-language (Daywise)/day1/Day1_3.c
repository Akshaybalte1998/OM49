/*
 ============================================================================
 Name        : Day1_3.c
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

	int num;
	char ch;

	printf("Please enter one number");
	scanf("%d",&num);
	printf("\n You have entered Num value as %d",num);
	printf("\n Enter Character Value");
	scanf("%*c"); //supress the meaning of new line character
	scanf("%c",&ch);
	printf("\n You have entered char value as %c",ch);

	return 0;
}

/*
int main(void) {


	 *    Welcome to P85 PreCAT Batch
	 *    AT	Sunbeam.
	 *    C:\Day1


	printf("Welcome to P85 PreCAT Batch \n AT \t Sunbeam.");
	printf("\n C:\\Day1 \"Program\" \r D:\\");
	printf("\n August 2019 \b \b \b Cycle");



	return EXIT_SUCCESS;
}*/
