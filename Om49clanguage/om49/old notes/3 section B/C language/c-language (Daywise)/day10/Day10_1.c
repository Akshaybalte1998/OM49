/*
 ============================================================================
 Name        : Day10_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	char s1[]="PreCAT";//declaration of string using Array
	printf("\n S1=%s Size S1 =%d Address=%u",s1,sizeof(s1),s1);

	char s2[]="PreCAT\0";
	printf("\n S2=%s2 Size S2=%d Address=%u",s2,sizeof(s2),s2);

	char s3[]="PreCAT\0P85";
	printf("\n S3=%s Size S3 =%d Address=%u",s3,sizeof(s3),s3);

	char *s4="PreCAT"; //declaration of string using pointer
	//printf("\n S4=%s Size S4 =%d Address=%u Len=%d",s4,sizeof(s4),s4,strlen(s4));

	//printf("\n S4 = %c",*s4);
	//printf("\n *s4+3=%c",*s4+3);
	//printf("\n *(s4+3)=%c",*(s4+3));

	//char *str='p'; //Exit Value : -1
	//printf("\n STR=%s",*str);



	return EXIT_SUCCESS;
}
