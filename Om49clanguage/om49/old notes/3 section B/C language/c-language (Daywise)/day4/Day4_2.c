/*
 ============================================================================
 Name        : Day4_2.c
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
	int value=5;
	while(value>0)
	{
		printf("\n Value = %d",value);
		value--;
	}
	goto LABLE; //jump statement

	LABLE:
	printf("\n Outside the While Loop");

	return 0;
}

/*

int main(void)
{
	int num,original;
	int sum=0;
	int rem;

	printf("Enter the number");
	scanf("%d",&num);
	original = num;

	while(num!=0)
	{
		rem=num%10; //saparating the digits from number
		sum=sum+rem * rem * rem;
		num/=10; //num=num/10;

	}
	if(sum==original)
		printf(" Number is an armstrong number");
	else
		printf("Number is not an armstrong number");

	return 0;
}
*/


/*

int main(void)
{

	int x=10,y=5,ans;
	while(y-->=1,x-->=1)
			{
				if(y==0)
						continue;
					ans= x / y;
					printf("\n %d / %d = %d ",x,y,ans);
				}
				printf("outside loop Values are : %d %d",x,y);

	return 0;
}
*/

/*

int main(void)
{

	int x=10,y=5,ans;
	while(y-->=1,x-->=1)
			{
				if(y==0)
						break;
					ans= x / y;
					printf("\n %d / %d = %d ",x,y,ans);
				}
				printf("outside loop Values are : %d %d",x,y);

	return 0;
}*/

/*
int main(void) {
	int value=10;

	 while(value>=0)
	{
		printf("\n %d",value);
		value--;
	}


	while(value--)
	{
		printf("%3d",value);
	}
	printf("\n Exit from while");


	return EXIT_SUCCESS;
}
*/
