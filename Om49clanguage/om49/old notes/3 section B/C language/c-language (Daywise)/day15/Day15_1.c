/*
 ============================================================================
 Name        : Day15_1.c
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
	//Create a file pointer
	FILE *ptr;
	char ch;

	//using fopen function to open"src.txt" in read "r" mode
	ptr=fopen("src.txt","r");

	//check if ptr==NULL
	if(ptr==NULL)
	{
		printf("Error");
		return 0;
	}

	//read the contents from file using fgetc()
	//and write it on console using fputc()
	while((ch=fgetc(ptr))!=EOF) //EOF=-1 indicates end of files
	{
		fputc(ch,stdout);
	}

	fclose(ptr);
return EXIT_SUCCESS;
}
