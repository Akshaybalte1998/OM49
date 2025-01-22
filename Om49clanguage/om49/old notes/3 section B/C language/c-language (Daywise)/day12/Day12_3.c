/*
 ============================================================================
 Name        : Day12_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main(void)
{
	int *ptr=NULL;
	int n,i;

	printf("\n How many elements u want to enter in array");
	scanf("%d",&n);
//STEP1 : Request memory dynamically
	ptr = (int *)malloc(sizeof(int)*n);

	//ptr = (int *)calloc(n,sizeof(int));

//STEP 2
	if(ptr==NULL)
	{
		printf("No memory received");
		return 0;
	}

	printf("Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&ptr[i]);

	printf("\n elements are:");
	for(i=0;i<n;i++)
		printf("%d \t",ptr[i]);
//STEP 3

	free(ptr);
	ptr=NULL; // OR else dangling pointer

	return 0;
}
