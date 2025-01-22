/*
 ============================================================================
 Name        : Day11_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[3][3]={{11,12,13},{14,15,16},{17,18,19}};
	int *p[4]={*arr,*(arr+1),*(arr+2)}; //declaring pointer array

	printf("%d \t %d",arr[0][0],*(*(p)));
	printf("\n%d \t %d",arr[0][1],*(*p+1));
	printf("\n%d \t %d",arr[0][2],*(*p+2));

	/*
	printf("%d \t %d",arr[1][0],*(*(p+1)+0));
	printf("\n %d \t %d",arr[1][1],*(*(p+1)+1));
	printf("\n %d \t %d",arr[1][2],*(*(p+1)+2));

	*/

	printf("\n %d",*(*(p+1)-3));//11
	printf("\n %d",*(*(p+1)+3));//17
	printf("\n %d",*(*(p+2)-2));//15


	return EXIT_SUCCESS;
}
