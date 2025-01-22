#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node *next;
}node_t;

node_t *head = NULL;

node_t *create_node(int data);
void add_node_at_last_position(int data);
void display_list(void);


int main(void)
{
    add_node_at_last_position(10);
    add_node_at_last_position(20);
    add_node_at_last_position(30);
    add_node_at_last_position(40);
    add_node_at_last_position(50);
    add_node_at_last_position(60);

    display_list();

    return 0;
}


void display_list(void)
{
    if( head != NULL )
    {
        node_t *trav = head;
        printf("list is : ");

        do
        {
            printf("%4d", trav->data);
            trav = trav->next;
        }while( trav != head );
        
        printf("\n");
    }
    else
    {
        printf("list is empty !!!\n");
    }
}

node_t *create_node(int data)
{
    node_t *temp = (node_t *)malloc(sizeof(node_t));
    if( temp == NULL )
    {
        printf("malloc() failed !!!\n");
        exit(1);
    }

    temp->data = data;
    temp->next = NULL;

    return temp;
}

void add_node_at_last_position(int data)
{
    //create a new node
    node_t *newnode = create_node(data);

    //if list is empty
    if( head == NULL )
    {
        head = newnode;
        newnode->next = head;
    }
    else//if list is not empty
    {
        //start traversal from the first node
        node_t *trav = head;

        //traverse the list till last node
        while( trav->next != head )
            trav = trav->next;

        //attach newly created node to the last node
        trav->next = newnode;
        //store an addr of first node into next part of newly created node
        newnode->next = head;
    }
}

