/*
 ============================================================================
 Name        : Day11_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void accept(int a[2][2]);
void disp(int a[2][2]);


int main(void)
{
	int arr[2][2];
	accept(arr); //passing 2D array to function
	disp(arr);
	return 0;
}
void accept(int a[2][2])
{
	int i,j;
	printf("Enter Array Elements");
	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				//scanf("%d",&a[i][j]);
				scanf("%d",(*(a+i)+j));


			}
		}
}
void disp(int a[2][2])
{
	int i,j;
	for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					//printf("\n a[%d][%d]=%d at &a[%d][%d]=%u ",i,j,a[i][j],&a[i][j]);

					printf("\n a[%d][%d]=%d at &a[%d][%d]=%u ",i,j,*(*(a+i)+j),i,j,(*(a+i)+j));


				}
			}


}




/*

#define ROW 2
#define COL 2

int main(void) {
	int mat1[2][2]={{1,1},{1,2},{2,1},{2,2}}; //valid(allowed)
	int mat2[ROW][COL]={{1,1},{1,2},{2,1},{2,2}};//valid(allowed)
	int mat3[][COL]={{1,1},{1,2},{2,1},{2,2}};//valid(allowed)
	int a[2][2];//valid(allowed)

	int i,j;

	//int mat5[][]={{1,1},{1,2},{2,1},{2,2}}; //Invalid Declaration : Not allowed
	//int mat6[ROW][]={{1,1},{1,2},{2,1},{2,2}}; //not allowed

	printf("Enter Elements");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}


	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("\n a[%d][%d]=%d at %u location ",i,j,a[i][j],&a[i][j]);

			}
		}

	return EXIT_SUCCESS;
}
*/
