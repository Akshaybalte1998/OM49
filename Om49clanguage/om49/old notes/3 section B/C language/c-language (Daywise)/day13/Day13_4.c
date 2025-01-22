/*
 ============================================================================
 Name        : Day13_4.c
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
void accept_date(DATE *dt);
void display_date(DATE *dt);

int main(void) {

	DATE today;
	accept_date(&today);
	display_date(&today);

	return EXIT_SUCCESS;
}


void accept_date(DATE *dt)
{
	printf("\n Enter Day");
	scanf("%d",&dt->dd);

	printf("\n Enter month");
	scanf("%d",&dt->mm);

	printf("\n Enter year");
	scanf("%d",&dt->yy);

}
void display_date(DATE *d1)
{
	printf("DD =%d MM =%d YY=%d",d1->dd,d1->mm,d1->yy);
}
