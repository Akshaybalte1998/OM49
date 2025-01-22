/*
 ============================================================================
 Name        : Day13_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct student //declaration of  a structure
{
	int marks;
	int rn;
	char name[20];
};

int main(void)
{
	struct student s1,s2,s3; //creating more number of structure variables

	s1.marks=80;
	s1.rn=10;
	strcpy(s1.name,"abc");

	printf("Marks=%d",s1.marks);
	printf("\n Roll No=%d",s1.rn);
	printf("\n Name=%s",s1.name);


	/*//copying contents from one structure variable to another element by element
 	s2.marks=s1.marks;
	s2.rn=s1.rn;
	strcpy(s2.name,s1.name);
	 */

	s2=s1; //copy the contents from one structure to another directly

	printf("\n Marks=%d",s2.marks);
	printf("\n Roll No=%d",s2.rn);
	printf("\n Name=%s",s2.name);

	printf("\n Enter Structure 3 data");
	printf("\n Enter Marks");
	scanf("%d",&s3.marks);
	printf("\n Enter Roll No");
	scanf("%d",&s3.rn);
	printf("\n Enter Name:");
	scanf("%s",s3.name);
	printf("\n S3 Marks=%d",s3.marks);
	printf("\n S3 Roll No=%d",s3.rn);
	printf("\n S3 Name=%s",s3.name);

	return EXIT_SUCCESS;
}



/*
struct student
{
	int marks;
	int rn;
	char name[20];
}s={70,2,"abc"};
 // assigning values to structure elements at the time of declaration of struct variable
 //marks=70 rn=2 name=abc

int main(void)
{
	printf("Marks=%d",s.marks);
	printf("\n Roll No=%d",s.rn);
	printf("\n Name=%s",s.name);


	return EXIT_SUCCESS;
}
*/




/*

struct student
{
	int marks;
	int rn;
	char name[20];
};

int main(void)
{
	struct student s; //structure variable declaration

	s.marks=90;
	s.rn=1;
	strcpy(s.name,"Sunbeam");

	printf("Marks=%d",s.marks);
	printf("\n Roll No=%d",s.rn);
	printf("\n Name=%s",s.name);


	return EXIT_SUCCESS;
}

*/


/*
struct student //defining a structure
{
	int marks;
	int rn;
	char name[20];
}s; //here s is known as structure variable

int main(void)
{

	s.marks=90;
	s.rn=1;
	strcpy(s.name,"Sunbeam");

	printf("Marks=%d",s.marks);
	printf("\n Roll No=%d",s.rn);
	printf("\n Name=%s",s.name);


	return EXIT_SUCCESS;
}
*/
