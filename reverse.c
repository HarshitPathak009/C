#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *head=NULL;
void addlast(int num);
void display();
void delete(int num);
void reverse();
void main()
{
	int i,num,ans=0;
	while(ans<5)
	{
	    system("cls");
		printf("\nEnter 1 to add in list");
		printf("\nEnter 2 to display list");
    	printf("\nEnter 3 to delete from list");
		printf("\nEnter 4 to reverese list");
		printf("\nEnter your choice ");
		scanf("%d",&ans);
		switch(ans)
		{
		
		case 1:
			printf("\nEnter number to be inserted ");
			scanf("%d",&num);
			addlast(num);
			break;
		case 2:
			display();
			printf("\n");
			getch();
			break;
		case 3:
			printf("\nEnter value to be deleted ");
			scanf("%d",&num);
			delete(num);
			break;
		case 4:
			reverse();
			break;
		default:
			exit(1);
	    }
    }
}
void addlast(int num)
{
	node *temp;
	temp = malloc(sizeof(node));
	temp->data = num;
	temp->next=NULL;
	if(head==NULL)
	   head=temp;
	else
	{
		node *p=head;
		while(p->next!=NULL)
		   p = p->next;
	     p->next = temp;
		
	}
}
void display()
{
	if(head!=NULL)
	{
		printf("\n");
		node *t=head;
		while(t!=NULL)
		{
		  printf("\t%d",t->data);
		  t = t->next;
	    }
	}
	else
	{
		printf("\nThe List doesn't exist'");
	}
}
void delete(int num)
{
	int c=0;
	if(head!=NULL)
	{
		node *temp = head, *p=head;
		while(temp!=NULL)
		{
			if(temp->data==num)
			{
				c=1;
				break;
			}
			else
			{
				p=temp;
				temp = temp->next;
			}
		}
		if(c==0)
		   printf("\nThe value is not present in the list");
		else
		{
			if(p==head&&temp==head)
			{
				head=temp->next;
				free(temp);
			}
			else
			{
				p->next=temp->next;
				free(temp);
			}
		}
	}    
	else
	   printf("\nThe list doesn't exist");
}
void reverse()
{
	node *c=head,*p=NULL,*n=NULL;
	while (c!=NULL) 
	{ 
		n=c->next;
		c->next=p;
		p=c;
		c=n;
    } 
        head = p;
}
