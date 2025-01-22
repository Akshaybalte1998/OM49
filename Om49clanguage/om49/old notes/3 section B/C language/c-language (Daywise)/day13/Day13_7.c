/*
 ============================================================================
 Name        : Day13_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct stud
{
	int marks;
	int rn;

};

void accept_record(struct stud *st);
void display_record(struct stud *st);

int main(void) {

	int i;
	struct stud s[5]; //array of structure variable
	accept_record(s);
	display_record(s);
	return EXIT_SUCCESS;
}
void accept_record(struct stud *st)
{
	int i;
	for(i=1;i<5;i++)
	{
		printf("\n Enter Student %d Record Marks and Roll No",i);
		scanf("%d %d",&(st+i)->marks,&(st+i)->rn);
		//scanf("%d %d",&st[i].marks,&st[i].rn);
	}
}

void display_record(struct stud *st)
{
	int i;
	printf("Student Details are:");
	for(i=1;i<5;i++)
	printf("Roll No : %d \t Marks : %d \t \n ",(st+i)->rn,(st+i)->marks);


}
