/*
 ============================================================================
 Name        : Day4_1.c
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

	//Variation 1
	//create enum normally
	enum colors{RED=1,BLUE,GREEN=30};
	printf("\n %d %d %d",RED,BLUE,GREEN); //accessing enum vriables directly

	//creating enum variable
	enum colors clr;
	clr=RED; //accesing enum constant through variable
	printf("\n %d",clr);

	printf("\n Size = %u",sizeof(clr));
	/*
	//Variation 2
	//Create enum by giving nickname (using typedef)

	typedef enum colors {RED,GREEN,BLUE}clr;

	//there are two ways to create enum varibales
	//1st way is to create enum variable using real name
	enum colors color;
	color=RED;
	printf("%d",color); //accessing the enum constants

	//2nd way is to create enum variable using nick name
	clr c;
	c=GREEN;
	printf("\n %d",c);

	//variation 3
	//creating anonymous enum
	typedef enum {JAN=1,FEB,MAR,APR,MAY} MONTH;

	printf("\n %d",JAN);

	MONTH mnt;
	mnt=MAY;
	printf("\n %d",mnt);

*/}









/*


int main(void) {

	typedef enum depts{TCT=10,ADMIN=20,PL=30,ACCOUNTS=40}DEPT;
	//DEPT is nick name given to enum depts
	DEPT choice; //creating enum variable using nick name
	printf("Enter Choice:");
	printf("10.TCT \t 20.Admin \t 30.Placement \t 40.Accounts");
	scanf("%d",&choice);

	switch(choice)
	{
	case TCT:
		printf("\n Training Center Training");
		break;
	case ADMIN:
		printf("\n Adminstration Dept");
		break;
	case PL:
			printf("\n Placement Dept");
			break;
	case ACCOUNTS:
			printf("\n Accounts Dept");
			break;
	default:
		printf("\n Wrong choice");
		break;
	}

	return EXIT_SUCCESS;
}
*/


/*
int main(void)
{
	typedef enum colors{RED,GREEN} CLR; //given nick name as DEPT to enum colors
	printf("%d %d",RED , GREEN); //direct accessation of enum elements


	//create enum variable
	enum colors clr; //datatype variale_name;
	//accessing enum constants through enum variable
	clr=RED;
	printf("\n clr=%d",clr);
	clr=GREEN;
	printf("\n clr=%d",clr);


	CLR dp; //creating enum variable using nick name
	dp=RED;
	printf("\n Accessing of dp : %d",dp);
	dp=GREEN;
	printf("\n Accessing of dp : %d",dp);

	return 0;
}
*/
