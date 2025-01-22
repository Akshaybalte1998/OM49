/*
 ============================================================================
 Name        : Day4_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	typedef enum {EXIT,ADD,SUB,MUL,DIV}MenuOperations;
	int n1,n2;
	MenuOperations choice;//creating enum variable

	printf("\n Enter First Number");
	scanf("%d",&n1);

	printf("\n Enter Second Number");
	scanf("%d",&n2);

	do
	{
		printf(" \n Enter choice :");
		printf("0.Exit \t 1.Add \t 2.Sub\t 3.Mul \t 4.Div");
		scanf("%d",&choice);

		switch(choice)
		{
		case ADD:
			printf("\n Addition=%d",(n1+n2));
			break;

		case SUB:
					printf("\n Subtraction =%d",(n1-n2));
					break;
		case MUL:
							printf("\n Multiplication =%d",(n1*n2));
							break;

		case DIV:
							printf("\n Division =%d",(n1/n2));
							break;

		}

	}while(choice!=EXIT);


	return EXIT_SUCCESS;
}
