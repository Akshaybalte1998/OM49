/*
 ============================================================================
 Name        : Day5_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void test();
void test1();
void test2();
void test3();



int main(void) {

	int num1=40,num2=10;
	printf("\n Before Function Call");
	printf("\n Num1=%d Num2=%d",num1,num2);

	//test();
	//test1();
	//test2();
	test3();

	printf("\n Back from function");
	num1++;
	num2++;

	printf("\n Num1=%d Num2=%d",num1,num2);

	return EXIT_SUCCESS;
}

void test3()
{
	int num1=30,num2=35;
	printf("\n Num1=%d Num2=%d",num1,num2);
	num1++;
	num2++;

}


/*

void test2()
{
	int num1=10,num2=11;
	printf("\n INSIDE TEST2");
	printf("\n Num1=%d Num2=%d",num1,num2);

	num1+=5; //num1=num1+5; //modify value of num1
	num2++; //num2++ ===> num2=num2+1

	printf("\n Num1=%d Num2=%d",num1,num2);


}
*/
/*

void test1()
{
	int num1,num2;
	printf("\n Inside TEST1 Function");
	printf("\n Num1=%d Num2=%d",num1,num2);
}
*/

/*

void test()
{
	int num1=100,num2=200;
	printf("\n Inside Function");
	printf("\n Num1=%d Num2=%d",num1,num2);
}
*/
