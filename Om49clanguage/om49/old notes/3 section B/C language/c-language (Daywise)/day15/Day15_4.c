/*
 ============================================================================
 Name        : Day15_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void get();
void display();


int main(void) {
	printf("\n Address of main %u",&main);
	//get(); //normal function call
	//display(); //normal function call
	printf("\n Address of get %u",&get);
	printf("\n Address of display %u",&display);

/*
	void *ptr=NULL;
	int i;
	ptr=&i;

	char ch;
	ptr=&ch;
*/

	void (*fnptr)(); // void function pointer
	fnptr=get; //get function address is stored in fnptr
	printf("\n FNPTR=%u",fnptr);
	(*fnptr)(); //calling the function through pointer


	fnptr=display;
	printf("\n FNPTR=%u",fnptr);
	(*fnptr)();









	return EXIT_SUCCESS;
}


void get()
{
	printf("\n Inside Get Function");
}


void display()
{
	printf("\n Inside Display Function");
}
