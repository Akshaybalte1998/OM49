/*
 ============================================================================
 Name        : Day14_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct
{
	short s[5];
	union
	{
	char x;
	float y;
	long z;
	short int z1;
	}u;
}t;
int main(void)
{
	printf("\n Size of Structure = %u",sizeof(t));

	return EXIT_SUCCESS;
}


/*

struct
{
	short s[5];
	union
	{
	char x;
	float y;
	long z;
	short int z1;
	}u;
}t;
int main(void)
{
	printf("\n Size of Structure = %u",sizeof(t));
	printf("\n Size of Union = %u",sizeof(t.u));
	printf("\n Size = %u",sizeof(t)+sizeof(t.u));

	return EXIT_SUCCESS;
}

*/
