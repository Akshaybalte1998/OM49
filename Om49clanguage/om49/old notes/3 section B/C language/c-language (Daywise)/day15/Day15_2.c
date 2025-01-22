/*
 ============================================================================
 Name        : Day15_2.c
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


	/*printf("%u",ftell(ptr));

	ch=fgetc(ptr);
	printf("\n %c is at %u",ch,ftell(ptr));

	 */

	/*fseek(ptr,10,SEEK_SET);
	ch=fgetc(ptr);
	printf("\n %c is at %u",ch,ftell(ptr));

	fseek(ptr,-5,SEEK_CUR);
	ch=fgetc(ptr);
	printf("\n %c is at %u",ch,ftell(ptr));
*/
	fseek(ptr,-5,SEEK_END);
	ch=fgetc(ptr);
	printf("\n %c is at %u",ch,ftell(ptr));


	fclose(ptr);

return EXIT_SUCCESS;
}
