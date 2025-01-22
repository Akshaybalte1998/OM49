/*
 ============================================================================
 Name        : Day10_3.c
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
	char str[10];
	char str1[10],str2[10];
	printf("Enter the value of string");
	//scanf("%s",str);
	gets(str); //accept a string
	printf("\n STR = %s",str);

	printf("\n Enter two strings");
	scanf("%s %s",str1,str2);
	printf("\n STR1 = %s STR2=%s",str1,str2);

	return 0;
}

/*
#define LEN 25 //macro defination

int main(void) {

	char city1[LEN]="pune"; //allowed
	char city2[LEN]={'k','a','r','a','d','\0'};//allowed

	char city3[]="Mumbai";//allowed
	//char city4[]={'k','a','r','a','d'}; //Not allowed
	char city5[]={'p','u','n','e','\0'};//allowed

	printf("City1=%s Address(City1)=%u Size(City1)=%d",city1,city1,sizeof(city1));
	printf("\n City2=%s Address(City2)=%u Size(City2)=%d",city2,city2,sizeof(city2));
	printf("\n City3=%s Address(City3)=%u Size(City3)=%d",city3,city3,sizeof(city3));
	//printf("\n City4=%s Address(City4)=%u Size(City4)=%d",city4,city4,sizeof(city4));
	printf("\n City5=%s Address(City5)=%u Size(City5)=%d",city5,city5,sizeof(city5));
	return EXIT_SUCCESS;
}
*/
