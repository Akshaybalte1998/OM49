/*
 ============================================================================
 Name        : Day3_3.c
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
	enum colors {RED,GREEN=11,BLUE=20}; //there are three enum constants


	printf("%d",RED);
	printf("\n %d",GREEN);
	printf("\n %d",BLUE);

	enum colors clr; //creating enum variable clr of user defined enum colors
	clr=RED;
	printf("\n %d",clr);
	printf("\n Size of enum %u",sizeof(clr));


}


/*
int main(void)
{
	typedef int number; //alias name to int data type using typedef

	number val1=10,val2=5;
	printf("Val1=%d Val2=%d",val1,val2);


	return 0;
}
*/

/*
int main(void) {
	int choice;
	int num1,num2;

	printf("Enter Value 1 ");
	scanf("%d",&num1);

	printf("Enter Value 2 ");
	scanf("%d",&num2);

	printf("\n Enter Choice:");
	printf("\n 1.ADD \t 2.SUB \t 3.MUL \t 4.DIV");
	scanf("%d",&choice);

	printf("Entering into switch case");

	switch(choice)
	{
	case 1:
		printf("\n Addition=%d",(num1+num2));
		break;
	case 2:
		printf("\n Subtraction=%d",(num1-num2));
		break;

	case 3:
			printf("\n Multiplication=%d",(num1*num2));
			break;

	case 4:
			printf("\n Division=%d",(num1/num2));
			break;
	default:
		printf("\n You have entered wrong option");
		break;
	}

	printf("\n Exiting from switch case");

	return EXIT_SUCCESS;
}*/
