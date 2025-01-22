/*
 ============================================================================
 Name        : Day2_5.c
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
	int num1=130;
	int num2=4000;
	int num3=50000;

	printf("\n %5d %5d %5d",num1,num2,num3);
	printf("\n %5d %5d %5d",num2,num1,num3);

	printf("\n %-5d %-5d %-5d",num1,num2,num3);
	printf("\n %-5d %-5d %-5d",num2,num1,num3);



	float f_val=11.43;
	printf("%12.2f %6.3f %f %10.2f",f_val,f_val,f_val,f_val);
	printf("\n %-12.2f %-6.3f %-17.2f",f_val,f_val,f_val);

	int num;
	num=printf("%10d hello");
	printf("\n %d",num);



	return 0;
}
/*
int main(void) {

	//unsingned char (0 to 255)
	//signed char (-128 to 127)

	char ch1=200; //signed
	char ch2=58; //signed
	unsigned ch3;
	ch3=ch1+ch2;
	printf("%d",ch3);

	return EXIT_SUCCESS;
}*/
