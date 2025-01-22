//implementation of singly linear linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;//4 bytes
    struct node *next;//self-referential pointer variable - 4 bytes
}node_t;

//create an empty list
node_t *head = NULL;

void add_node_at_last_position(int data);
void add_node_at_first_position(int data);
node_t *create_node(int data);
void display_list(void);

int main(void)
{
    /*
    printf("sizeof(node_t): %d bytes\n", sizeof(node_t));
    printf("sizeof(head): %d bytes\n", sizeof(head));
    */
    /*
    add_node_at_last_position(10);
    add_node_at_last_position(20);
    add_node_at_last_position(30);
    add_node_at_last_position(40);
    add_node_at_last_position(50);
    add_node_at_last_position(60);

    display_list();

    add_node_at_first_position(5);
    */

    add_node_at_first_position(11);
    add_node_at_first_position(22);
    add_node_at_first_position(33);
    add_node_at_first_position(44);
    add_node_at_first_position(55);

    display_list();

    return 0;
}

void add_node_at_first_position(int data)
{
    //1. create a newnode
    node_t *newnode = create_node(data);

    //2. if list is empty -- attach newly created node to the head
    if( head == NULL )
    {
        //store an addr of newly created node into the head pointer
        head = newnode;
    }
    else//if list is not empty
    {
        //store an addr of cur first node into the next part of newly created node
        newnode->next = head;
        //attach newly created node to the head
        head = newnode;        
    }
}

void add_node_at_last_position(int data)
{
    //1. create a newnode
    node_t *newnode = create_node(data);

    //2. if list is empty -- attach newly created node to the head
    if( head == NULL )
    {
        //store an addr of newly created node into the head pointer
        head = newnode;
    }
    else//if list is not empty
    {
        //start traversal from the first node
        node_t *trav = head;

        //traverse the list till last node
        while( trav->next != NULL )
        {
            trav = trav->next;//moves trav pointer to its next node
        }

        //attach newly created node to the last node
        //i.e. store an addr of newly created node into the next part of last node
        trav->next = newnode;
    }
}

void display_list(void)
{
    //if list is not empty
    if( head != NULL )
    {
        //start traversal from first node
        node_t *trav = head;
        printf("list is: head -> ");
        //traverse the list and display data part of each node
        while( trav != NULL )
        {
            printf("%d -> ", trav->data);
            trav = trav->next;//move trav pointer to its next node
        }
        printf("null\n");
    }
    else
    {
        printf("list is empty !!!\n");
    }
}

node_t *create_node(int data)
{
    //1. allocate memory dynamically for a node
    node_t *temp = (node_t *)malloc(sizeof(node_t));
    if( temp == NULL )
    {
        printf("malloc() failed !!!\n");
        exit(1);
    }

    //2. initialize members of the node
    temp->data = data;
    temp->next = NULL;

    //3. return starting addr of newly created node to the calling function
    return temp;
}

