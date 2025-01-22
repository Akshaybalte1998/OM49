/*
 ============================================================================
 Name        : Day12_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	int i,sum=0;
	for(i=1;i<argc;i++)
		sum=sum+atoi(argv[i]);// this will convert string to integer
	printf("Addition of Command Line Argument is =%d",sum);
	return 0;
}

/*
int main(int argc,char **argv, char **env)
{
	int i;
	for(i=0;i<31;i++)
		printf("\n env[%d]=%s",i,env[i]);
	return 0;
}

*/


/*

int main(int argc,char **argv)

{
	int i;
	printf("\n ARG Count=%d",argc);
	printf("\n ARGV Contents are : ");
	for(i=0;i<argc;i++)
		//printf("\n argv[%d]=%s",i,argv[i]);
	printf("\n argv[%d]=%s",i,*(argv+i));
	return EXIT_SUCCESS;
}
*/
