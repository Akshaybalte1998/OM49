/*
 ============================================================================
 Name        : Day2_3.c
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
	int n1=20,n2=10;
	float res;
	res=(float)n1/n2; //typecase : conversion of one datatype into another
	printf("Result=%f",res);
	return 0;

}
/*
int main(void) {

	int val=30;
	char ch='A';
	float f_val=30.5;
	double d=40.65;

	printf("Value =  %d  Size = %u",val,sizeof(val));
	printf("\n Value =  %c  Size = %u",ch,sizeof(ch));
	printf("\n Value =  %f  Size = %u",f_val,sizeof(f_val));

	printf("\n Size of Char + float = %u",sizeof(ch+f_val));

	printf("\n size of int value=%u",sizeof(50));
	printf("\n size of char value=%u",sizeof('Z'));
	printf("\n size of decimal number=%u",sizeof(50.5));
	printf("\n size of decimal number=%u",sizeof(60.5f));

	printf("\n char+int+float+double = %u",sizeof(ch+val+f_val+d));
	printf("\n double+int = %u",sizeof(d+4));

	printf("\n sizeof(char)=%u sizeof(ch)=%u sizeof('A')=%u",sizeof(char),sizeof(ch),sizeof('A'));
	printf("\n %u %u %u",sizeof(double),sizeof(d),sizeof(30.10));
	printf("\n Additon of double+double+double= %u",sizeof(double)+sizeof(d)+sizeof(30.10));

	printf(" \n sizeof(val=val+40) = %u",sizeof(val=val+40));

	return EXIT_SUCCESS;
}
*/
