/*
 ============================================================================
 Name        : Day12_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define STRDISP(x) {printf("\n %s ",#x);}
#define STR_GET_DATA(x) {printf("\n %s ",#x+4);}

int main(void)
{
	STRDISP(sunbeam);
	STR_GET_DATA(sunbeam);
	return 0;
}

/*

#define PI 3.14

int main(void)
{

#if defined (PI)
	printf("DEFINED");
#else
	printf("NOT DEFINED");
#endif
}
*/

/*
//macro definition
#define SWAP(x,y,type) {type temp; temp = x ;x=y; y=temp;}

int main(void)
{
	int a=10,b=5;
	printf("\n Before : A=%d B=%d",a,b);
	SWAP(a,b,int); //macro is expanded at this location
	printf("\n After : A=%d B=%d",a,b);
	return 0;
}
*/


/*
#define SQR(x) (x)*(x)
int main(void)
{
	int a=2,b=3;
	printf("%d",SQR(a));
	printf("\n %d",SQR(a+b));

	return 0;
}
*/


/*
#define PI 3.14

int main(void)
{

	printf("%f",PI);
	return EXIT_SUCCESS;
}
*/



