/*
 ============================================================================
 Name        : Day3_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*int main(void)
{

	char ch;
	printf("Enter Character");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90)
		printf("\n Entered Character %c is Uppercase letter",ch);
	else if(ch>=97 && ch<=122) //2==>49
		printf("\n Entered Character %c is Lowercase letter",ch);
	else if(ch>=48 && ch<=57)
		printf("\n Entered Character %c is Numeric Value",ch);
	else
		printf("\n Special character");
	return 0;
}*/


/*
//amount= (qty * rate) - ((qty * rate)* disc);
//qty>30 discount=discount*0.25
//other wise discount = 0

int main(void)
{
	int qty,rate;
	float amount,discount;

	discount=1;
	printf("\n Enter rate of product");
	scanf("%d",&rate);
	printf("Enter the Quantity of product");
	scanf("%d",&qty);

	if(qty>30)
		discount=discount*0.25; //discount*=0.25
	else
		discount=0;
	printf("Discount=%d",discount);
	amount= (qty * rate) - ((qty * rate)* discount);

	printf("Amount = %f",amount);

	return 0;
}
*/



/*

int main(void)
{
	int num;
	printf("\n Enter Number Value");
	scanf("%d",&num);

	if(num%2==0)
	{
		printf("EVEN Number");
		printf("\n Value inside num = %d",num);
	}
	else
		printf("ODD number");
	return 0;
}
*/

/*
int main(void) {
	int val1=10,val2=15;
	if(val1>val2)
		printf("Val-1 is greater");
	else
		printf("\n Val-2 is greater");
	return EXIT_SUCCESS;
}
*/
