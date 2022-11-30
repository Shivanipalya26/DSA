#include<stdio.h>
#include<conio.h>
struct node{
	int info;
	struct node *next;
};

typedef struct node Node;

void push(Node **q, int item)
{
	Node *ptr;
	ptr=(Node *)malloc(sizeof(Node));
	ptr->info=item;
	if(*q==NULL)
	{
		printf("Underflow\n");
		*q=ptr;
	}
	else
	{
		ptr->next=*q;
		*q=ptr;
	}
}

void pop(Node **q)
{
	if(*q==NULL)
	{
		printf("Underflow\n");
	}
	else
	{
		Node *ptr,*trav=*q;
		ptr=*q;
		*q=trav->next;
		free(ptr);
	}
}

void display(Node *q)
{
	if(q==NULL)
	{
		printf("Empty");
	}
	else
	{
		Node *trav=q;
		while(trav->next!=NULL)
		{
			printf("%d->",trav->info);
			trav=trav->next;
		}
	}
}
void main()
{
	Node *top;
	int i,cho,item;
	do
	{
	clrscr();
	display(top);
	printf("\nEnter choice:");
	printf("\n1. PUSH\n2. POP\nEnter choice:");
	scanf("%d",&cho);
	switch(cho)
	{
		case 1:printf("Enter element");
		       scanf("%d",&item);
		       push(&top,item);
		       break;
		case 2:pop(&top);
			break;
	}
	}while(cho!=6);
	getch();
}