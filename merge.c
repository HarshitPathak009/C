#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *head[]={NULL,NULL,NULL};
void addlast(int num, int n);
void display(int n);
void delete(int num, int n);
void merge();
void main()
{
	int i,num,ans=0;
	while(ans<7)
	{
		system("cls");
		printf("\nEnter 1 to add in first list");
		printf("\nEnter 2 to display first list");
    	printf("\nEnter 3 to delete in first list");
		printf("\nEnter 4 to add in second list");
		printf("\nEnter 5 to display second list");
		printf("\nEnter 6 to delete in second list");
		printf("\nEnter your choice ");
		scanf("%d",&ans);
		switch(ans)
		{
		
		case 1:
			printf("\nEnter number to be inserted ");
			scanf("%d",&num);
			addlast(num,1);
			break;
		case 2:
			display(1);
			printf("\n");
			getch();
			break;
		case 3:
			printf("\nEnter value to be deleted ");
			scanf("%d",&num);
			delete(num,1);
			break;
		case 4:
			printf("\nEnter number to be inserted ");
			scanf("%d",&num);
			addlast(num,2);
			break;
		case 5:
			display(2);
			printf("\n");
			getch();
			break;
		case 6:
			printf("\nEnter value to be deleted ");
			scanf("%d",&num);
			delete(num,2);
			break;
	    }
    }
    merge();
    display(3);
}
void addlast(int num, int n)
{
	node *temp;
	temp = malloc(sizeof(node));
	temp->data = num;
	temp->next=NULL;
	if(head[n-1]==NULL)
	   head[n-1]=temp;
	else
	{
		node *p=head[n-1];
		while(p->next!=NULL)
		   p = p->next;
	     p->next = temp;
		
	}
}
void display(int n)
{
	if(head[n-1]!=NULL)
	{
		node *t=head[n-1];
		while(t!=NULL)
		{
		  printf("\n%d",t->data);
		  t = t->next;
	    }
	}
	else
	{
		printf("\nThe List doesn't exist'");
	}
}
void delete(int num, int n)
{
	int c=0;
	if(head[n-1]!=NULL)
	{
		node *temp = head[n-1], *p=head[n-1];
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
			if(p==head[n-1]&&temp==head[n-1])
			{
				head[n-1]=temp->next;
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
void merge()
{
	if(head[0]!=NULL)
	{
		node *temp;
		temp=head[0];
		head[2]=temp;
		while(temp->next!=NULL)
		  temp=temp->next;
		temp->next=head[1];
	}
	else
	{
		head[2]=head[1];
	}  
}
