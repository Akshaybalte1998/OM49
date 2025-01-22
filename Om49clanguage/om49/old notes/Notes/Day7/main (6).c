#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

typedef struct queue
{
    int arr[ SIZE ];
    int rear;
    int front;
}queue_t;

int menu(void);
void init_queue(queue_t *pq);
int is_queue_full(queue_t *pq);
int is_queue_empty(queue_t *pq);
void enqueue(queue_t *pq, int ele);
void dequeue(queue_t *pq); 
int get_front(queue_t *pq);


enum menu_options{ EXIT, ENQUEUE, DEQUEUE };


int main(void)
{
    int ele;
    queue_t q;

    init_queue(&q);

    while(1)
    {
        int choice = menu();
        switch(choice)
        {
            case EXIT:
                exit(0);

            case ENQUEUE:
                //step1: check is queue not full
                if( !is_queue_full(&q))
                {
                    printf("enter an ele: ");
                    scanf("%d", &ele);
                    enqueue(&q, ele);
                    printf("%d is inserted into the queue\n", ele);
                }
                else
                {
                    printf("queue is full !!!\n");
                }
               
                break;

            case DEQUEUE:
                //step1: check is queue not empty
                if( !is_queue_empty(&q))
                {
                    ele = get_front(&q);
                    dequeue(&q); 
                    printf("%d is deleted from the queue\n", ele);
                }
                else
                {
                    printf("queue is empty !!!\n");
                }

                break;
        }
    }

    return 0;
}

int menu(void)
{
    int choice;
    printf("linear queue\n");
    printf("0. exit\n");
    printf("1. enqueue\n");
    printf("2. dequeue\n");
    printf("enter the choice: ");
    scanf("%d", &choice);

    return choice;
}

void init_queue(queue_t *pq)
{
    int index;
    //initially value of front & rear are -1
    pq->rear = -1;
    pq->front = -1;

    for( index = 0 ; index < SIZE ; index++ )
        pq->arr[ index ] = 0;
}

int is_queue_full(queue_t *pq)
{
    return ( pq->rear == SIZE-1 );
}

int is_queue_empty(queue_t *pq)
{
    return ( pq->rear == -1 || pq->front > pq->rear );
}

void enqueue(queue_t *pq, int ele)
{
    //step2: increment the value of rear by 1
    pq->rear++;
	//step3: insert/push an ele into the queue from rear end
    pq->arr[ pq->rear ] = ele;

	/*step4: if( front == -1 )
			front = 0
    */
   if( pq->front == -1 )
    pq->front = 0;
}

int get_front(queue_t *pq)
{
    //return the value of an ele which is at front position
    return ( pq->arr[ pq->front ] );
}

void dequeue(queue_t *pq)
{
    /*step2: increment the value of front by 1 (i.e. we are achieving deletion of an ele
	from the queue).*/
    pq->front++;
}
