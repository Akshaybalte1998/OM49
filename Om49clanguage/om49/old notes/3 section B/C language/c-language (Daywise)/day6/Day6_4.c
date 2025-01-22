/*
 ============================================================================
 Name        : Day6_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void test1();
void test2();
void test3();

extern int a; //declaration of extern variable

int main(void)
{


	printf("\n Accessing Value from main: %d",a);
	printf("\n Address of External Variable %u",&a);
	//a++;
	//printf("\n After Incr : %d",a);
	test1();
	test2();
	test3();
	printf("\n Back to main function");
	a+=10;
	printf("\n Value = %d Address=%u",a,&a);
	return EXIT_SUCCESS;
}

a=100;


void test1()
{
	a++;
	printf("\n Inside Test1 Function");
	printf("\n Value=%d Address=%u",a,&a);
	a++;
}
void test2()
{
	printf("\n Inside Test2 Function");
	printf("\n Value=%d Address=%u",a,&a);
	a++;
}
void test3()
{
	printf("\n Inside Test3 Function");
	printf("\n Value=%d Address=%u",a,&a);
}

