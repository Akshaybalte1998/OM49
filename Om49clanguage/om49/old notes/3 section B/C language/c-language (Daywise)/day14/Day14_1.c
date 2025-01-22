/*
 ============================================================================
 Name        : Day14_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


//bit filed

#pragma pack(1) //it indicates pack the memory by 1 byte
typedef struct
{
	char name[20];
	int rn:5;  //setting the bit field
	int marks:4; //setting the bit field

}STUDENT;

int main(void)
{
	STUDENT s; //creating a structure variable
	printf("Size=%u",sizeof(s));

	return EXIT_SUCCESS;
}





/*

typedef struct
{
	char name[20];
	int rn:5;  //setting the bit field
	int marks:4; //setting the bit field

}STUDENT;

int main(void)
{
	STUDENT s; //creating a structure variable
	printf("Size=%u",sizeof(s));

	return EXIT_SUCCESS;
}

*/



/*


typedef struct
{
	char name[20];
	int rn;  //setting the bit field
	int marks; //setting the bit field

}STUDENT;

int main(void)
{
	STUDENT s; //creating a structure variable
	printf("Size=%u",sizeof(s));

	return EXIT_SUCCESS;
}
*/
