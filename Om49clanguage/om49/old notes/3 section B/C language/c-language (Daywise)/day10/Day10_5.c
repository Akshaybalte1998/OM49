/*
 ============================================================================
 Name        : Day10_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int menu();

int main(void)
{

	int ch,result;
	char c;
	char src[20],dest[20],search[10];
	char *ptr=NULL;
	do{
		ch=menu();
		switch(ch)
		{
				case 1:
					printf("\n Enter String to find length");
					scanf("%s",src);
					result=strlen(src);
					printf("Length=%d",result);
					break;
				case 2:
					printf("\n Enter String");
					scanf("%s",src);
					printf("\n Enter character to be searched");
					scanf("%*c");
					scanf("%c",&c);
					ptr=strchr(src,c);

					if(ptr==NULL)
						printf("Character Not found in a string");
					else
						printf("Character is found in a string");
					break;
				case 3:
					printf("\n Enter  Source String");
					scanf("%s",src);

					printf("\n Enter  Destination String");
					scanf("%s",dest);

					strcat(src,dest);
					printf("Concatinated String=%s",src);
				break;

				case 4:

					printf("\n Enter  Source String");
					scanf("%s",src);
					printf("\n Enter  Destination String");
					scanf("%s",dest);

					result=strcmp(src,dest);
					if(result==0)
						printf("Strings are equal");
					else if(result<0)
						printf("%d",result);
					else
						printf("%d",result);
					break;


				case 5:

					printf("\n Enter  Source String");
					scanf("%s",src);
					printf("\n Enter  Destination String");
					scanf("%s",dest);

					result=strcasecmp(src,dest);
					if(result==0)
						printf("Strings are equal");
					else if(result<0)
						printf("%d",result);
					else
						printf("%d",result);
					break;

				case 6:
				printf("\n Enter String");
				scanf("%s",src);
				printf("\n Enter string to be searched");
				scanf("%s",&search);
				ptr=strstr(src,search);

				if(ptr==NULL)
					printf("string Not found in a source string");
				else
					printf("string is found in a source string");
				break;

				case 7:
							printf("\n Enter Source String");
							scanf("%s",src);
							strcpy(dest,src);
							printf("Destination=%s",dest);
							break;

		}
	}while(ch!=0);
	return EXIT_SUCCESS;
}


int menu()
{
	int choice;
	printf("\n Enter Choice:");
	printf("\n 0.Exit \t 1.Length \t 2.Find Char \t 3.Concat \n 4.STRCMP 5.STCCCMP 6.STRSTR 7.STRCOPY");
	scanf("%d",&choice);
	return choice;
}
