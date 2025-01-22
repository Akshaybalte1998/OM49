/*
 ============================================================================
 Name        : Day5_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//function declarations
int accept_num();
char accept_op();
void display(int num);
void calculate(int num1,int num2,char op);


int main(void) {

	int val1,val2;
	char op;

	val1=accept_num(); //function call returning a int value
	display(val1);

	val2=accept_num(); //function call returning a int value
	display(val2);

	op=accept_op();//function call returning a char value


	calculate(val1,val2,op); //function call to perform mathematical operations



	return EXIT_SUCCESS;
}

int accept_num()
{
	int n;
	printf("\n Enter the number");
	scanf("%d",&n);
	return n;
}

char accept_op()
{
	char ch;
	printf("\n Operator + OR - OR * OR /");
	scanf("%*c");
	scanf("%c",&ch);
	return ch;
}
void display(int num)
{
	printf("\n Number Value=%d",num);
}
void calculate(int num1,int num2,char op)
{
	switch(op)
	{
	int result;
	case '+':
		result=num1+num2;
		printf("Addition of %d and %d = %d",num1,num2,result);
	break;

	case '-':
			result=num1-num2;
			printf("Subtraction = %d",result);
		break;
	case '*':
			result=num1*num2;
			printf("Multification = %d",result);
		break;
	case '/':
			result=num1/num2;
			printf("Division = %d",result);
		break;



	}


}


