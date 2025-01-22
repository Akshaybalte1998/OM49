/*
 ============================================================================
 Name        : Day13_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct //anonymous structure
{
	int marks;
	int rn;
}s;

typedef struct //declaration of structure using typedef and giving nickname
{
	char city[20];
	char state[30];
}add;

//declaration of structure using typedef and giving real +  nickname
typedef struct fullname
{
	char fname[30];
	char lname[30];
}FN;

int main(void) {

	s.marks=90;
	s.rn=1;
	printf("Data of anonymous structure %d %d",s.marks,s.rn);



	add a; //creating a structure variable if structure is declared using typedef
	strcpy(a.city,"Pune");
	strcpy(a.state,"MAH");
	printf("\n City=%s State=%s",a.city,a.state);


	struct fullname fn1; //creating structure variable with real name
	strcpy(fn1.fname,"ABC");
	strcpy(fn1.lname,"PQR");
	printf("\n F1.FNAME=%s F1.LNAME=%s",fn1.fname,fn1.lname);


	FN fn2; //creating the structure variable with nickname
	strcpy(fn2.fname,"abc");
	strcpy(fn2.lname,"pqr");
	printf("\n F2.FNAME=%s F2.LNAME=%s",fn2.fname,fn2.lname);


	return EXIT_SUCCESS;
}
