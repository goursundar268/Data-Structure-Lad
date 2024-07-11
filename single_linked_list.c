#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node * next;
}node;

node * createlinkedlist(node *);
node * createnode();
node * insertbegin(node *);
node * deletebegin(node *);
void display(node *);

int main()
{
	int option,loop;
	node * head = NULL;
	printf("\n CREATING LINK LIST---- :\n");
	head = createlinkedlist(head);
	do
	{
		printf("\n-----------\n");
		printf("\n 1.INSERT\n");
		printf("\n 2.DELETE\n");
		printf("\n 3.DISPLAY\n");
		printf("\n 4.EXIT\n");
		printf("\n-----------\n");

		printf("\n ENTER YOUR OPTION :\n");
		scanf("%d",&option);

		switch(option)
		{
			case 1 : 
				printf("\n INSERT \n");
				head = insertbegin(head);
				loop=1;
				break;
		        case 2:
				printf("\n DELETE\n");
				head = deletebegin(head);
				loop=1;
				break;
			case 3: 
				printf("\n DISPLAY\n");
				display(head);
				loop = 1;
				break;
			case 4:
				printf("\n EXIT\n");
				loop = 0;
				break;
			default:
				printf("\n YOU HAVE ENTERED WRONG OPTION.\n");
				loop = 1;
		}
	}while(loop);
}

node* createnode()
{
	node* temp = (node*)malloc(sizeof(node));
	temp->next = NULL;
	return temp;
}

node * createlinkedlist(node * head) 
{
	int i,n;
	printf("\n NEW NODES ARE INSERTED AT BEGINING--\n");
	printf("\n HOW MANY NODES?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		head = insertbegin(head);
	}
	return head;
}

node * insertbegin(node * head)
{
	node* newnode = createnode();
	if(newnode==NULL)
	{
		printf("\nCAN'T CREATE A NODE FOR FULL MEMORY.\n");
	}
	else
	{
		printf("\nENTER THE DATA TO BE INSERTED AT BEGINING:\n ");
		scanf("%d", &newnode->data);
		newnode->next = head;
		head = newnode;
	}
	display(head);
	return head;
}

node * deletebegin(node * head)
{
	node* ptr;
	if(head == NULL)
	{
		printf("\n EMPTY LINKLIST.\n");
		return NULL;
	}
	else
	{
		ptr = head;
		head = head->next;
	}
	printf("\n NODE WITH DATA [%d] IS DELETED.\n", ptr->data);
	free(ptr);
	display(head);
	return head;
}

void display(node * p)
{
	printf("\nTHE LINKEDLIST IS ->\n");
	if(p==NULL)
	{
		printf("\n EMPTY LINKLIST.\n");
	}
	else
	{
		while(p != NULL)
		{
			if(p->next == NULL)
			{
				printf("[%d]",p->data);
			}
			else
			{
				printf("[%d]->",p->data);
			}
			p = p->next;
		}
	}
	printf("\n");
	printf("\n _________\n");
}
