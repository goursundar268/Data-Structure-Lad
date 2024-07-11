#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

node * create_linked_list(node *);
node * create_node();
node * insert_begin(node *);
node * insert_end(node *);
node * insert_specific_position(node *,int);
void display(node *);

int main()
{
    node * head = NULL;
    printf("\n CRATING LINK LIST----:\n");
    head = create_linked_list(head);
}

node * create_node()
    {
         node * temp=(node*)malloc(sizeof(node));
         temp->next=NULL;
         return temp;
    }
    node * create_linked_list(node * head)
    {
        int i,n;
        printf("\n NEW NODES ARE INSERTED AT BEGINING--\n");
        printf("\n HOW MANY NODES?\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            head=insert_begin(head);
        }
        return head;
    }
    node * insert_begin(node * head)
    {
        node * newnode=create_node();
        if(newnode==NULL)
        {
            printf("Memory full");
        }
        else
        {
            printf("\n ENTER THE DATA TO BE INSERTED AT BEGINING:\n");
            scanf("%d",&newnode->data);
            newnode->next=head;
            head=newnode;
        }
        display(head);
        return head;
    }
    void display(node * p)
    {
        printf("\n THE LINKED LIST IS ->\n");
        if(p==NULL)
            {
                 printf("\n EMPTY LINK LIST.\n");
            }
        else
        {
            while (p!=NULL)
            {
                if(p->next==NULL)
                    {
                        printf("[%d]",p->data);
                    }
                else
                    {
                        printf("[%d]->",p->data);
                    }
                    p=p->next;
            }
            
        }

        printf("\n");
        printf("\n_\n");
    }