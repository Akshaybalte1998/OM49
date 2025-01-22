/*
 ============================================================================
 Name        : Day15_3.c
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
	FILE *fptr1;
	FILE *fptr2;


	char c;

	fptr1=fopen("src.txt","r");
	if(fptr1==NULL)
	{
		printf("Error");
	}

	fptr2=fopen("dest.txt","w");
	if(fptr2==NULL)
	{
		printf("Error");
	}

	c=fgetc(fptr1);
	while(c!=EOF)
	{
		fputc(c,fptr2);
		c=fgetc(fptr1);
	}

	printf("Contents are copied");

	return EXIT_SUCCESS;
}
