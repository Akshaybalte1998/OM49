/*
 ============================================================================
 Name        : Day9_3.c
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

	const float PI=3.14;
	const float * const fptr=&PI;
	//fptr=&PI;//error: assignment of read-only location
	printf("\n PI=%f *fptr=%f",PI,*fptr);
	//PI++; //Error

	//*fptr++; // error: increment of read-only variable

	//float val=20.5;
	//fptr=&val;////error: assignment of read-only location

	return 0;
}

/*
int main(void)
{
	const float PI=3.14;
	const float *fptr;
	fptr=&PI;
	printf("\n PI=%f *fptr=%f",PI,*fptr);

	//PI++;//error: increment of read-only variable
	float val=5.46;
	fptr=&val; //allowed
	printf("\n  VAL =%f *fptr=%f",val,*fptr);
	//*fptr=6.78; //error: assignment of read-only location

	float val1=1.20;
	fptr=&val1; //allowed

	return 0;
}

*/

/*

int main(void)
{
	const float PI=3.14;
	float *fptr=&PI;

	printf("PI=%f *fptr=%f",PI,*fptr);
	*fptr=4.45; //No Error
	//modifying the constant value pointed by pointer
	printf("\n PI=%f *fptr=%f",PI,*fptr);

	return 0;
}
*/



/*

int main(void) {

	//const variables are assigned values at the time of declaration
	const float PI=3.14;
	//float const PI=3.14;
	//PI=3.14; //error: assignment of read-only variable

	printf("\n PI=%f",PI);
	//PI++; //error: increment of read-only variable
	//printf("\n PI=%f",PI);
	return EXIT_SUCCESS;
}
*/

/*

int main(void) {

	float PI=3.14;
	printf("\n PI=%f",PI);
	PI++;
	printf("\n PI=%f",PI);
	return EXIT_SUCCESS;
}
*/
