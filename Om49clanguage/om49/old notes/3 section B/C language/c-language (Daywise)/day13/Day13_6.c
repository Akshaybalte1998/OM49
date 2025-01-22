/*
 ============================================================================
 Name        : Day13_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct stud
{
	int marks;
	int rn;

};
int main(void) {

	int i;
	struct stud s[5]; //array of structure variable
	for(i=1;i<5;i++)
	{
		printf("\n Enter Student %d Record Marks and Roll No",i);
		scanf("%d %d",&s[i].marks,&s[i].rn);
	}

	printf("Student Details are:");
	for(i=1;i<5;i++)
	{
		printf("\n Roll No %d = %d \t Marks %d=%d" ,i,s[i].rn,i,s[i].marks);



	}

	return EXIT_SUCCESS;
}
