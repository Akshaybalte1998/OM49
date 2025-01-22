/*
 ============================================================================
 Name        : Day10_4.c
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
	char str[50];
	printf("Enter one string");
	fgets(str,15,stdin);
	printf("\n STR=%s",str);
	return 0;

}
/*
int main(void) {

	char str1[150];
	printf("Enter string");
	//scanf("%[^\n]s",str1);
	//scanf("%[^.]s",str1);
	//scanf("%[0-9]s",str1);
	//scanf("%[^0-9]s",str1);
	//scanf("%[A-Z]s",str1);
	//scanf("%[^A-Z]s",str1);
	//scanf("%[a-z]s",str1);
	scanf("%[^a-z]s",str1);
	printf("Str1=%s",str1);
	return EXIT_SUCCESS;
}
*/
