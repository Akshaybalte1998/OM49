/*
 ============================================================================
 Name        : Day13_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int dd;
	int mm;
	int yy;
}DATE;

DATE accept(); //structure variable will act as a return type to accept()
void display(DATE d);

int main(void)
{

	DATE d1;
	d1=accept();
	display(d1);
	return EXIT_SUCCESS;
}



DATE accept()
{
	int dd,mm,yy;
	DATE d;
	printf("\n Enter Date");
	scanf("%d",&d.dd);

	printf("\n Enter Month");
	scanf("%d",&d.mm);

	printf("\n Enter Year");
	scanf("%d",&d.yy);

	return d;
}

void display(DATE d)
{
	printf("DD-MM-YY=%d-%d-%d",d.dd,d.mm,d.yy);
}
