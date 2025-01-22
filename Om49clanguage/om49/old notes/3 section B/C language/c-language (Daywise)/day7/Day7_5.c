/*
 ============================================================================
 Name        : Day7_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//function declaration
void accept_num(int *num);
void swap_by_val(int n1,int n2);
void swap_by_ref(int *n1,int *n2);

int main(void) {
	int num1,num2;

	accept_num(&num1); //function call by passing address
	//printf("\n Num 1 = %d",num1);

	accept_num(&num2); //function call by passing address
	//printf("\n Num 2 = %d",num2);

	printf("Call by value");
	printf("\n Before Swap Num1=%d Num2=%d",num1,num2);
	swap_by_val(num1,num2); //function call by passing values
	printf("\n After Swap Num1=%d Num2=%d",num1,num2);

	printf("Call by reference");
	printf("\n Before Swap Num1=%d Num2=%d",num1,num2);
		swap_by_ref(&num1,&num2);//function call by passing address
		printf("\n After Swap Num1=%d Num2=%d",num1,num2);




	return EXIT_SUCCESS;
}

void accept_num(int *num)
{
	printf("\n Enter Number");
	scanf("%d",num);
	//from main when it is called,
	//its treated as scanf("%d",&num1)
	//scanf("%d",&num2);
}


void swap_by_val(int n1,int n2)
{
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
}

void swap_by_ref(int *n1,int *n2) //n1=&num1 n2=&num2
{
		*n1=*n1+*n2;
		*n2=*n1-*n2;
		*n1=*n1-*n2;
}
