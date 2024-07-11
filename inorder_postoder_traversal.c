#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
typedef struct Node 
{
    int key;
    struct Node* left;
    struct Node* right;
}node;

// Function to create a new node
node* newNode(int item) 
{
    node* temp = (node*)malloc(sizeof(node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to insert a new node into the BST
node* insertNode(node* root, int value) 
{
    if (root == NULL) 
    {
        return newNode(value);
    }

    if (value < root->key) 
    {
        root->left = insertNode(root->left, value);
    } 
    else if (value > root->key) 
    {
        root->right = insertNode(root->right, value);
    }
    return root;
}

// In-order traversal of the BST 
void inOrderTraversal(node* root) 
{
    if (root != NULL) 
    {
        inOrderTraversal(root->left);
        printf("%d ", root->key);
        inOrderTraversal(root->right);
    }
}

// Post-order traversal of the BST 
void postOrderTraversal(node* root) 
{
    if (root != NULL) 
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->key);
    }
}

int main() 
{
    node* root = NULL;
    int number,value;
    // Insert nodes into the BST
    printf("\nHow many nodes do you want to insert?");
    scanf("%d",&number);
    for(int i=0;i<number;i++)
    {
        printf("\nEnter the value you want to insert?");
        scanf("%d",&value);
        root = insertNode(root, value);
    }

    printf("In-order traversal of the BST: ");
    inOrderTraversal(root);
    printf("\n");
    
    printf("Post-order traversal of the BST: ");
    postOrderTraversal(root);
    printf("\n");
    

    return 0;
}
