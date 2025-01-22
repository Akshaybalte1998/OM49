/*
 ============================================================================
 Name        : Day14_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct test
{
	int x;
	struct test *ptr; //structure pointer variable
};
int main(void) {
struct test temp; //structure variable
temp.x=20;
temp.ptr=&temp;
printf("%d",temp.ptr->x);

return EXIT_SUCCESS;
}
