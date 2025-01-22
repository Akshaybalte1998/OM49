//searching & sorting algorithms
#include<stdio.h>

#define SIZE 6
#define true 1
#define false 0

#define SWAP(a,b) { int t = a; a = b; b = t; }

int comparisons = 0;

//function declarations
void display_array(int arr[]);
int linear_search(int arr[], int key);
int binary_search(int arr[], int key);
void selection_sort(int arr[]);
void bubble_sort(int arr[]);
void insertion_sort(int arr[]);

//entry point function
int main(void)
{
    int key;
    //int arr[SIZE] = {10,20,30,40,50,60,70,80,90,100};
    //int arr[SIZE] = { 30,20,60,50,10,40 };
    int arr[SIZE] = { 10,20,30,40,50,60 };

    //sorting:
    printf("before sorting:\n");
    display_array(arr);

    //selection_sort(arr);
    //bubble_sort(arr);
    insertion_sort(arr);

    printf("after sorting:\n");
    display_array(arr);

    /*
    //searching:
    printf("enter the key: ");
    scanf("%d", &key);
    
    //if( linear_search(arr, key) )
    if( binary_search(arr, key) )
    {
        printf("%d is found in an array\n", key);
        printf("no. of comparisons are: %d\n", comparisons);
    }
    else
    {
        printf("%d is not found in an array\n", key);
        printf("no. of comparisons are: %d\n", comparisons);
    }
    */

    return 0;
}//end of main() function

//function definitions
void insertion_sort(int arr[])
{
    int i;
    int iterations=0;
    int while_cnt=0;

    for( i = 1 ; i < SIZE  ; i++ )
    {
        int j = i-1;
        int key = arr[i];

        iterations++;
        while( j >= 0 && arr[j] > key )
        {
            while_cnt++;
            //shift ele towards its right by 1 pos
            arr[j+1] = arr[j];
            j--;
        }

        //insert key into an array at its appropriate position
        arr[j+1] = key;
    }


    printf("no. of iterations are: %d\n", iterations);
    printf("while_cnt: %d\n", while_cnt);
}


void bubble_sort(int arr[])
{
    int iterations = 0;
    int comparisons = 0;
    int pos;
    int it;
    int flag = true;

    //for it = 0 => pos = 0,1,2,3,4
    //for it = 1 => pos = 0,1,2,3
    //for it = 2 => pos = 0,1,2
    //for it = 3 => pos = 0,1
    //for it = 4 => pos = 0  

    //flag=true,false

    for( it = 0 ; it < SIZE-1 && flag == true ; it++ )
    {
        flag = false;
        iterations++;

        for( pos = 0 ; pos < SIZE-it-1 ; pos++ )
        {
            comparisons++;
            if( arr[ pos ] > arr[ pos+1 ] )
            {
                flag = true;
                SWAP(arr[ pos ], arr[ pos+1 ]);
            }
        }
    }

    printf("no. of iterations are   : %d\n", iterations);
    printf("no. of comparisons are  : %d\n", comparisons);

}

void selection_sort(int arr[])
{
    int iterations = 0;
    int comparisons = 0;
    int sel_pos;
    int pos;

    for( sel_pos = 0 ; sel_pos < SIZE-1; sel_pos++ )
    {
        iterations++;

        for( pos = sel_pos + 1 ; pos < SIZE ; pos++ )
        {
            comparisons++;
            if( arr[ sel_pos ] > arr[ pos ] )
                SWAP(arr[sel_pos], arr[pos]);
        }
    }

    printf("no. of iterations are   : %d\n", iterations);
    printf("no. of comparisons are  : %d\n", comparisons);
}

int binary_search(int arr[], int key)
{
    int left = 0;
    int right = SIZE-1;
    comparisons=0;

    while( left <= right )
    {
        int mid = (left+right)/2;

        comparisons++;
        if( key == arr[mid] )
            return true;

        if( key < arr[mid] )
            right = mid-1;
        else
            left = mid+1;
    }

    return false;
}

int linear_search(int arr[], int key)
{
    int index;

    comparisons=0;
	for( index = 0 ; index < SIZE ; index++ )
	{
        comparisons++;
		if( key == arr[ index ] )
			return true;
	}
	return false;
}

void display_array(int arr[])
{
    int index;
    printf("array ele's are: ");
    for( index = 0 ; index < SIZE ; index++ )
    {
        printf("%4d", arr[index]);
    }   
    printf("\n");
}