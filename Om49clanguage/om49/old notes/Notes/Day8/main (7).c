#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node *left;
    int data;
    struct node *right;
}node_t;

//create an empty bst
node_t *root = NULL;


void add_node(int data);
node_t *create_node(int data);
void preorder(node_t *trav);
void inorder(node_t *trav);
void postorder(node_t *trav);


int main(void)
{
    //50 20 90 85 10 45 30 100 15 75 95 120 5 50
    add_node(50);
    add_node(20);
    add_node(90);
    add_node(85);
    add_node(10);
    add_node(45);
    add_node(30);
    add_node(100);
    add_node(15);
    add_node(75);
    add_node(95);
    add_node(120);
    add_node(5);
    add_node(50);

    printf("PREORDER : "); preorder(root); printf("\n");
    printf("INORDER  : "); inorder(root); printf("\n");
    printf("POSTORDER: "); postorder(root); printf("\n");

    return 0;
}


void add_node(int data)
{
    //create a newnode
    node_t *newnode = create_node(data);

    //if bst is empty - attach newly created node to the root
    if( root == NULL )
    {
        root = newnode;
    }
    else//if bst is not empty -> find appropriate pos of that node
    {
        //traverse the bst and find an appropriate position
        node_t *trav = root;

        while(1)
        {
            if( data < trav->data )//node will be a part of its left subtree
            {
                if( trav->left == NULL )//if left subtree of cur node is empty
                {
                    //attach newly created node as left child to the cur node
                    trav->left = newnode;
                    break; 
                }
                else//if cur node is having left subtree
                {
                    trav = trav->left;//goto its left subtree
                }
            }
            else//node will be a part its right subtree
            {
                if( trav->right == NULL )//if right subtree of a cur node is empty
                {
                    //attach newly created node as right child of cur node
                    trav->right = newnode;
                    break;
                }
                else//if cur node is having right subtree
                {
                    trav = trav->right;//goto its right subtree
                }
            }
        }
    }
}

void preorder(node_t *trav)
{
    if( trav == NULL )
        return;

    //VLR
    printf("%4d", trav->data);
    preorder(trav->left);
    preorder(trav->right);
}

void inorder(node_t *trav)
{
    if( trav == NULL )
        return;
        
    //LVR
    inorder(trav->left);
    printf("%4d", trav->data);
    inorder(trav->right);
}

void postorder(node_t *trav)
{
    if( trav == NULL )
        return;
        
    //LRV
    postorder(trav->left);
    postorder(trav->right);
    printf("%4d", trav->data);
}


node_t *create_node(int data)
{
    //allocate memory dynamically for a node
    node_t *temp = (node_t *)malloc(sizeof(node_t));
    if( temp == NULL )
    {
        printf("malloc() failed !!!\n");
        exit(1);
    }

    //initialize its members
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    //return an addr of newly created node to the calling function
    return temp;
}