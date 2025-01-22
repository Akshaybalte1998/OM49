/*
 ============================================================================
 Name        : Day13_5.c
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

typedef struct
{
	int rollno;
	int marks;
	struct //nested structure
	{
		char fname[10];
		char mname[10];
		char lname[10];
	}name;
	DATE dob; //calling another structure
}STUDENT;

int main(void)
{
	STUDENT s;
	s.rollno=1;
	s.marks=86;

	strcpy(s.name.fname,"abc");
	strcpy(s.name.mname,"pqr");
	strcpy(s.name.lname,"xyz");

	s.dob.dd=13;
	s.dob.mm=9;
	s.dob.yy=19;

	printf("\n Roll No= %d Marks=%d",s.rollno,s.marks);

	printf("\n NAME=%s MNAME=%s LNAME=%s",s.name.fname,s.name.mname,s.name.lname);

	printf("\n DD-MM-YY=%d-%d-%d",s.dob.dd,s.dob.mm,s.dob.yy);




	return EXIT_SUCCESS;
}
