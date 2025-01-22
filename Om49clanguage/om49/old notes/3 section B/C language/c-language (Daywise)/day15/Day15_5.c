/*
 ============================================================================
 Name        : Day15_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
	return a+b;
}

int operate(int a,int b, int (*fnptr)(int,int))
{
	return (*fnptr)(a,b);
}

int main(void) {

	int a=10,b=2;
	int res;
	int (*fnptr)();

	res=add(a,b);
	printf("Normal Function Call %d ",res);

	fnptr=add;
	res=(*fnptr)(a,b);
	printf("\n Function Call thru pointer %d ",res);
	res=operate(a,b,fnptr);
	printf("\n Function Call thru pointer as an argument %d ",res);

return 0;
}
