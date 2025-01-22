/*
 ============================================================================
 Name        : Day8_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//function declarations
void accept_arr(int arr[5]);
void disp_arr(int arr[5]);
int search_arr(int *p, int key);
void sort_arr(int *p);


int main(void) {

	int arr[5];
	int key,result;
	accept_arr(arr); //function call, passed array name as an argument
	disp_arr(arr); //function call

	printf("\n Enter element to be searched");
	scanf("%d",&key);
	result=search_arr(arr,key);
	if(result==-1)
		printf("Element not found");
	else
		printf("Element found");

	sort_arr(arr);
	disp_arr(arr);
	return EXIT_SUCCESS;
}


void accept_arr(int arr[5])
{
	int i;
	printf("\n Enter Array elements");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
}



void disp_arr(int arr[5])
{
	int i;
	printf("\n Array Elements are:");
	for(i=0;i<5;i++)
		printf("\n %5d at %u ",arr[i],&arr[i]);

}


int search_arr(int *p, int key)
{
	int i;
	for (i=0;i<5;i++)
	{
		if(*(p+i)==key)
		return i;
	}
	return -1;
}

void sort_arr(int *p)
{
	int i,j;
		for(i=0;i<5-1;i++)
		{
		for(j=i+1;j<5;j++)
		{
		if(*(p+i) > *(p+j)) //n1>n2
		{
			*(p+i) = *(p+i) + *(p+j); // n1=n1+n2
			*(p+j) = *(p+i) - *(p+j); // n2=n1-n2
			*(p+i) = *(p+i) - *(p+j); // n1=n1-n2
		}//swap
		}
		}
}
