/*
 ============================================================================
 Name        : Day9_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//pointer arithmetic

void disp(int *ptr);

int main(void) {

	int arr[5]={11,22,33,44,55};
	disp(arr);

	return EXIT_SUCCESS;
}

void disp(int *ptr)
{
	int *base=ptr; // ptr address is stored in base (-*base=&arr)
	printf("\n %u %u %d",ptr,&ptr,sizeof(ptr));
	int i=0;

	while(i<5) //Display the contents of array using pointer
	{
		printf("\n ptr=%d ptr=%u",*ptr,ptr);
		ptr++; //increment operation on pointer
		//increment will point to next location of array
		i++;
	}

	ptr--; //ptr=ptr-1 //decrement operation on pointer
	printf("\n after ptr-- ptr=%d ptr=%u",*ptr,ptr);
	ptr--;
	printf("\n after ptr-- ptr=%d ptr=%u",*ptr,ptr);

	int diff=ptr-base;
	printf("\n diff=%d",diff);
}
