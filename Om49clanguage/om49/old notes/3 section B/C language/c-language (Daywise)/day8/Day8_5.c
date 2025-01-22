/*
 ============================================================================
 Name        : Day8_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[3]={1,2,3};
	printf("%u %u %u",arr,&arr,sizeof(arr));
	printf("\n %d %u ",*arr,arr);
	printf("\n %d %u ",*(arr+1),arr+1);
	printf("\n %d %u ",*(arr+2),arr+2);
	//various ways to access array elements
	//using array notation and using pointer notation
	printf("\n %d %d %d %d",arr[0],*(arr+0),0[arr],*(arr));
	printf("\n %d %d %d %d",arr[1],*(arr+1),1[arr],*(1+arr));
	printf("\n %d %d %d %d",arr[2],*(arr+2),2[arr],*(2+arr));


/*

	-arr,&arr,sizeof(arr)
	-*arr,arr,*(arr+1),arr+1

	-arr[1],*(arr+1),1[arr],*(1+arr)

	-arr[2],*(arr+2),2[arr],*(2+arr)
*/
	return EXIT_SUCCESS;
}
