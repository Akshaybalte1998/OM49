/*
 ============================================================================
 Name        : Day2_1.c
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
	int num;

	printf("Enter one numeric value");
	scanf("%d",&num);

	printf("\n Number= %d Octal=%o Hexa=%x",num,num,num);

	//if any number is having left most bit as 0 it indicates octal number

	printf("\n Number= %d Octal=%o Hexa=%x",0100,0100,0100);

	//if any number is having left most bits as 0x it indicates hexa number
	return 0;
}


/*
int main(void)
{

	int val;
	val=printf("hello world");
	//printf will return the number of characters it have printed on console
	printf("%d",val);
	return 0;
}
*/

/*

int main(void) {
	char ch='A';
	printf("Character Value = %c ASCII Value=%d Address=%u",ch,ch,&ch);
	int num=65;
	printf("\n Numeric Value = %d ASCII Value=%c Address=%u",num,num,&num);

	// '\b' '\r' '\t' '\n' //escape sequences

	printf("\n ACSCII Value of \'\\b\' %d",'\b');
	printf("\n ACSCII Value of \'\\r\' %d",'\r');
	printf("\n ACSCII Value of \'\\t\' %d",'\t');
	printf("\n ACSCII Value of \'\\n\' %d",'\n');

	return EXIT_SUCCESS;
}
*/
