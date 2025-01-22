/*
 ============================================================================
 Name        : Day3_1.c
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

	int n1,n2,max;
	printf("\n Enter First Number");
	scanf("%d",&n1);

	printf("\n Enter Second Number");
	scanf("%d",&n2);
	printf("N1=%d N2=%d",n1,n2);

	//ternary operator ( (expression)?True :False )
	max=(n1>n2)?n1:n2;
	printf("\n Maximum of %d and %d is %d",n1,n2,max);
	return 0;
}


/*

int main(void)
{
	int num1=6;
	int num2=4;

	int result;

	result=num1 & num2; //bitwise AND operator
	// 6 in binary 0110
	// 4 in binary 0100
	// &  		   0100 == > 4
	printf("\n Result of Bitwise AND =%d",result);


	result=num1 | num2; //bitwise OR operator
		// 6 in binary 0110
		// 4 in binary 0100
	//				   0110 =>6

	printf("\n Result of Bitwise  OR = %d",result);

	result=num1 ^ num2; //bitwise EX-OR operator
			// 6 in binary 0110
			// 4 in binary 0100
			//			   0010 ==>2
	printf("\n Result of Bitwise Ex-OR = %d",result);

	//EX-OR if both the bits are different output is 1



	return 0;
}
*/


/*

//short hand operators demo
int main(void)
{

	int num1=20;
	num1+=10; // num1=num1+10;
	printf("\n Num1+10=%d",num1);

	num1-=5; //num1=num1-5
	printf("\n Num1-5=%d",num1);


	num1*=2; // num1=num1*2
	printf("\n Num1*2=%d",num1);

	num1/=5; //num1=num1/5
	printf("\n Num1/5=%d",num1);

	num1%=5; //num1=num1%5
	printf("\n Num1%5=%d",num1);
	return 0;
}

*/
/*

int main(void)
{
	int x=20, y=25,z;
	z= x<=y || y>=x; //output 20,25,1
	printf("x=%d y=%d z=%d",x,y,z);

	z= (x=x-5) && (y=y+4);
	printf("\n x=%d y=%d z=%d",x,y,z);

	return 0;
}
*/



/*

int main(void)
{
	int num=10;
	printf("%d %d",++num,num++);
	//in this case evaluation inside the printf statement will be from right to left
	return 0;
}
*/
/*

int main(void)
{

	int num1=10,num2,num3;
	//incase of post operation (++/--) it first associates the value to the variable
	//then it performs its operation of (++ or --)
	num2=num1++;
	printf("\n num1=%d num2=%d",num1,num2);

	//incase of pre operation (++/--) it first performs the operation(++/--)
	//then it associates the value to variable
	num3=++num1;
	printf("\n num1=%d num3=%d",num1,num3);
	return 0;
}
*/

/*

int main(void)
{


	int a = -10, b = 3, c = 0, d;
	printf("Before : a=%d b=%d c=%d d=%d",a,b,c,d);
	d = a++ || (++b && c++);
	printf("\n After : a=%d b=%d c=%d d=%d",a,b,c,d);
	d = c++ || (++b && a++);
	printf("\n After : a=%d b=%d c=%d d=%d",a,b,c,d);

	return 0;
}
*/

/*

int main(void) {
	int num;
	num=printf("One"),printf("Two"),printf("Three");
	printf("%d",num);
	return EXIT_SUCCESS;
}
*/
