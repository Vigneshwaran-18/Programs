#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *temp = NULL;
struct Node *head = NULL;
int co=0;


pushf()
{
	int n,l=0;
	printf("Enter the no of nodes:");
	scanf("%d",&n);
	if(n>0){
	do
	{
		
		struct Node *newN = (struct Node *) malloc(sizeof(struct Node));
		if(newN == NULL)
			printf("not able to allocate mem to element");
		else
		{	
			printf("Enter the data: ");
			scanf("%d",&newN->data);
			if(head == NULL)
			{
				head = newN;
				head->next=NULL;
			}
			else 
				newN->next = head;
			head=newN;
			co++;
			l++;
		}
		
	}while(l<n);
	}
}

display()
{	
	
	if(head==NULL)
		printf("\bNo data/Stack Underflow\n");
	else
	{
	temp = head;
	printf("The data in the stack is\n");
	
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	}
	
}

ls()
{
	int x,i=0;
	temp = head;
	printf("Enter key to Search");
	scanf("%d",&x);
	while(temp!=NULL)
	{
		if(temp->data==x)
		{
			printf("Element %d found at pos %d",x,i);
			return ;	
		}
		temp=temp->next;
		i++;
	}
	printf("\nNot found");
}

pop()
{	
	if(head==NULL)
		printf("\bNo data/Stack Underflow\n");
	else{
	temp = head;
	if(temp->next!=NULL)
	{
		printf("Popped element: %d\n", temp->data);
		if(head->next!=NULL)
			head = head->next;
		free(temp);
	}}

}
	
		


void main()
{
	int no,c;
	while(1){
	printf("\n\n----------------\nMain Menu\n----------------\n1.Create\n2.Pop\n3.Display\n4.Linear Search\n5.Exit\nEnter your choice:");
	scanf("%d",&c);
		switch(c)
		{
			case 1:	pushf();
				break;
			case 2: pop();
				break;
			case 3:	display();
				break;
			case 4: ls();
				break;
			case 5:	printf("Exiting now\n");
				exit(0);
			default: printf("Invalid choice");
				break;
		}
	}
}
