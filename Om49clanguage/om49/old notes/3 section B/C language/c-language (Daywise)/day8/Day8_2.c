/*
 ============================================================================
 Name        : Day8_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a[3]={9,8,7};
	printf("%u  \t %u",a,&a[0]); //display base address/starting address

	return 0;
}


/*

int main(void)
{
	//int c[];//error: array size missing in ‘c’
	int c[]={30,40,50}; //valid declaration

	//if we do not specify the size of array,
	//then we must initialize it at the time of declaration

	printf("%4d",c[0]);
	printf("%4d",c[1]);
	printf("%4d",c[2]);

	printf("\n Size:%u",sizeof(c)); //output : 12
	return 0;
}
*/


/*

int main(void)
{
	int a[3]={10};
	printf("%5d",a[0]);
	printf("%5d",a[1]);
	printf("%5d",a[2]);
	printf("\n Size = %u",sizeof(a));
	return 0;
}

*/

/*

int main(void) {

	int a[5];//declaration of array "a" of type int which can store 5 elements
	int i;
	a[0]=10;
	a[1]=20;
	a[2]=30;
	a[3]=40;

	printf("\n Address of a[0]=%u \t Address of arry a =%u",&a[0],a);
	//if we define/initialize array elements after declaration
	//and if some elements in an array are not initialized
	//by default it gives garbage value
	printf("\n A : Array Elements are :");
	for(i=0;i<5;i++)
	printf("\n a[%d]=%d \t a[%d] is at =%u",i,a[i],i,&a[i]);

	//In this case "b" array is declared and defined at the same line
	//remaining elements will be initialized to 0

	int b[3]={11,22}; //b[0]=11 b[1]=22
	printf("\n B : Array Elements are :");
		for(i=0;i<3;i++)
		printf("\n b[%d]=%d \t b[%d] is at =%u",i,b[i],i,&b[i]);

	return EXIT_SUCCESS;
}
*/

