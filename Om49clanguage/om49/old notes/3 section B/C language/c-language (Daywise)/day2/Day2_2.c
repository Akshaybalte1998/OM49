/*
 ============================================================================
 Name        : Day2_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void)
{
	int val=1;
	printf("Val = %d",val);
	int num;
	num =4,5,6;
	printf("\n Num=%d",num);
	num=(7,8,9);
	printf("\n Num=%d",num);
	num=(11),18,9;
	printf("\n Num=%d",num);
	return 0;
}


/*
int main(void)
{

	int num=25;
	int res;
	res=sqrt(25);
	//error: undefined reference to `sqrt'
	//if we donot include #include<math.h> header file
	//GCC C Linker
	printf("SQRT Result= %d",res);
	return 0;
}
*/

/*

int main(void)
{
	int n1=10,n2=5,result;
	result=n1+n2;
	//compile time error : GCC C Compiler
	//error: ‘result’ undeclared  if we donot declare variable result
	printf("%d",result);
	return 0;

}
*/
/*int main(void) {


	int a,b,c;
	printf("Enter first number");
	scanf("%d",&a);

	printf("\n Enter second number");
	scanf("%d",&b);
	c=a/b; //run time error if user enters b value as 0
	printf("Result=%d",c);

	return EXIT_SUCCESS;
}*/
