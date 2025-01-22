/* implementation of singly linear linked list functionalities */
#include<stdio.h>
#include<stdlib.h>

/* global declaration section */

//node structure
typedef struct node
{
    int data;//4 bytes
    struct node *next;//self-referential pointer variable - 4 bytes
}node_t;

//create an empty list
node_t *head = NULL;

void add_node_at_last_position(int data);
void add_node_at_first_position(int data);
void add_node_at_specific_position(int data, int pos);
void delete_node_at_first_position(void);
void delete_node_at_last_position(void);
void delete_node_at_specific_position(int pos);
void free_list(void);
node_t *create_node(int data);
void display_list(void);
int count_nodes(void);
int menu(void);


enum menu_options{ EXIT, ADDLAST, ADDFIRST, ADDATPOS, DELFIRST,
DELLAST, DELATPOS, DISP };

/* entry point function */
int main(void)
{
    int pos;
    int data;

    while(1)
    {
        int choice = menu();

        switch(choice)
        {
            case EXIT:
                free_list();
                exit(0);

            case ADDLAST:
                printf("enter the data: ");
                scanf("%d", &data);
                add_node_at_last_position(data);
                break;

            case ADDFIRST:
                printf("enter the data: ");
                scanf("%d", &data);
                add_node_at_first_position(data);
                break;

            case ADDATPOS:

                while(1)
                {
                    //accept the position from user
                    printf("enter the position: ");
                    scanf("%d", &pos);
                    //validate the position
                    
                    //if position is valid the break the loop
                    if( pos > 0 && pos <= count_nodes() + 1 )
                        break;

                    printf("invalid position !!!\n");    
                }

                printf("enter the data: ");
                scanf("%d", &data);
                add_node_at_specific_position(data, pos);
                break;

            case DELFIRST:
                delete_node_at_first_position();
                printf("node at first position deleted sucessfully...\n");
                break;

            case DELLAST:
                delete_node_at_last_position();
                printf("node at last position deleted sucessfully...\n");
                break;

            case DELATPOS:
                while(1)
                {
                    //accept the position from user
                    printf("enter the position: ");
                    scanf("%d", &pos);
                    //validate the position
                    
                    //if position is valid the break the loop
                    if( pos > 0 && pos <= count_nodes() )
                        break;

                    printf("invalid position !!!\n");    
                }

                delete_node_at_specific_position(pos);
                printf("node at %d position deleted sucessfully...\n", pos);

                break;
            case DISP:
                display_list();
                break;
        }//end of switch control block
    }//end of while loop
    return 0;
}

int menu(void)
{
    int choice;

    printf("singly linear linked list operations:\n");
    printf("0. exit\n");
    printf("1. add node at last position\n");
    printf("2. add node at first position\n");
    printf("3. add node at specific position\n");
    printf("4. delete node at first position\n");
    printf("5. delete node at last position\n");
    printf("6. delete node at specific position\n");
    printf("7. display list\n");
    
    printf("enter the choice: ");
    scanf("%d", &choice);

    return choice;
}

void delete_node_at_specific_position(int pos)
{
    if( pos == 1 )//if pos is the first position
        delete_node_at_first_position();
    else
    if( pos == count_nodes() )//if pos is the last position
        delete_node_at_last_position();
    else//if pos is in between position
    {
        //start traversal from the first node
        node_t *trav = head, *temp = NULL;
        int i = 1;
        //traverse the list till (pos-1)th node
        while( i < pos-1 )
        {
            i++;
            trav = trav->next;
        }

        //store an addr of node to be deleted in a temp
        temp = trav->next;
        //store an addr of (pos+1)th node into next part of (pos-1)th node
        trav->next = trav->next->next;
        //delete the node
        free(temp);
        temp = NULL;       
    }
}


//free the list
void free_list(void)
{
    if( head != NULL )
    {
        //till list not becomes empty
        while( head != NULL )
            delete_node_at_last_position();
            //delete_node_at_first_position();

        printf("list freed sucessfully...\n");
    }
    else
    {
        printf("list is empty !!!\n");
    }
}

void delete_node_at_last_position(void)
{
    //check list is not empty
    if( head != NULL )
    {
        //if list contains only one node
        if( head->next == NULL )
        {
            //delete the node and make head as NULL
            free(head);
            head = NULL;
         }
         else//if list contains more than one node
         {
             //start traversal from first node
             node_t *trav = head;
             //traverse the list till second last node
             while( trav->next->next != NULL )
                trav = trav->next;

            //delete last node
            free(trav->next);
            //make next part of cur second last node as NULL
            trav->next = NULL;
         }
    }
    else
    {
        printf("list is empty !!!\n");
    }
}


void delete_node_at_first_position(void)
{
    //check list is not empty
    if( head != NULL )
    {
        //if list contains only one node
        if( head->next == NULL )
        {
            //delete the node and make head as NULL
            free(head);
            head = NULL;
         }
         else
         {
              //store an addr of cur first node into temp which is to be deleted
              node_t *temp = head;
              //attach cur second node to the head
             head = head->next;
             //delete the node
             free(temp);
             temp = NULL;
         }
    }
    else
    {
        printf("list is empty !!!\n");
    }
}

void add_node_at_specific_position(int data, int pos)
{
    if( pos == 1 )//position the first position
        add_node_at_first_position(data);
    else 
    if( pos == count_nodes() + 1 )//if pos is the last position
        add_node_at_last_position(data);
    else//if position is in between position
    {
        //create a newnode
        node_t *newnode = create_node(data);
        //start traversal from the first node
        node_t *trav = head;
        int i = 1;

        //traverse the list till (pos-1)th node
        while( i < pos-1 )
        {
            i++;
            trav = trav->next;
        }

        //store an addr of cur (pos)th node into the next part of newly created node
        newnode->next = trav->next;
        //store an addr of newly created node into the next part (pos-1)th node
        trav->next = newnode;
    }
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

int count_nodes(void)
{
    int cnt = 0;

    //if list is not empty
    if( head != NULL )
    {
        node_t *trav = head;
        while( trav != NULL )
        {
            cnt++;
            trav = trav->next;
        }
    }
    return cnt;
}

void display_list(void)
{
    //if list is not empty
    if( head != NULL )
    {
        //start traversal from first node
        node_t *trav = head;

        printf("no. of nodes in a list are: %d\n", count_nodes());
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


