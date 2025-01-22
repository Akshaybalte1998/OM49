/*
 ============================================================================
 Name        : Day8_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[4]={11,22,33,44};
	int i;
	for(i=0;i<4;i++)
	printf("\n arr[%d]=%d at %u",i,arr[i],&arr[i]);
	printf("\n %d %u %u",arr[1],arr+1,&arr+1);
	printf("\n %d %u %u",arr[2],arr+2,&arr+2);
	printf("\n %d %u %u",arr[3],arr+3,&arr+3);

	return EXIT_SUCCESS;
}
