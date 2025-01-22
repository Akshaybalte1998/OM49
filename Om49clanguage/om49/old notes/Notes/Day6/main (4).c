//static stack implementation - by using an array
#include<stdio.h>
#include<stdlib.h>


#define SIZE 10


typedef struct stack
{
    int arr[SIZE];
    int top;
}stack_t;

//declaration of stack functionalties
void init_stack(stack_t *ps);
int is_stack_full(stack_t *ps);
int is_stack_empty(stack_t *ps);
void push_element(stack_t *ps, int ele);
void pop_element(stack_t *ps);
int peek_element(stack_t *ps);
int menu(void);

enum menu_options{ EXIT, PUSH, POP, PEEK };


int main(void)
{
    int ele;
    stack_t s;
    
    init_stack(&s);

    while(1)
    {
        int choice = menu();
        switch( choice )
        {
            case EXIT:
                exit(0);

            case PUSH:
                //step1: check stack is not full                
                if( !is_stack_full(&s) )
                {
                    printf("enter an ele: ");
                    scanf("%d", &ele);
                    push_element(&s, ele);

                }
                else
                {
                    printf("stack overflow !!!\n");
                }
                break;

            case POP:
                //step1: check stack is not empty
                if( !is_stack_empty(&s))
                {
                    ele = peek_element(&s);
                    pop_element(&s);
                    printf("popped ele is: %d\n", ele);
                }
                else
                {
                    printf("stack underflow !!!\n");
                }
                
                break;

            case PEEK:
                //step1: check stack is not empty
                if( !is_stack_empty(&s) )
                {
                    ele = peek_element(&s);
                    printf("topmost ele is: %d\n", ele);
                }
                else
                {
                    printf("stack underflow !!!\n");
                }

                break;
        }//end of switch control block
    }//end of while loop

    return 0;
}

int menu(void)
{
    int choice;

    printf("static stack\n");
    printf("0. exit\n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. peek\n");
    printf("enter the choice: ");
    scanf("%d", &choice);

    return choice;
}

//definitions of stack functionalties
void init_stack(stack_t *ps)
{
    int index;
    ps->top = -1;

    for( index = 0 ; index < SIZE ; index++ )
        ps->arr[ index ] = 0;

}

int is_stack_full(stack_t *ps)
{
    return ( ps->top == SIZE-1 );
}

int is_stack_empty(stack_t *ps)
{
    return ( ps->top == -1 );
}

void push_element(stack_t *ps, int ele)
{
    //step2: increment the value of top by 1
    ps->top++;
	//step3: insert an ele into the stack at top position
    ps->arr[ ps->top ] = ele;
}

void pop_element(stack_t *ps)
{
    /* step2: decrement the value of top by 1 ( i.e. we are deleting an ele from the
	stack). */
    ps->top--;
}

int peek_element(stack_t *ps)
{
    //step2: return the value of topmost ele (without incrementing/decrementing top).
    return ( ps->arr[ ps->top ] );    
}