#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void add(struct node **,int);
void del(struct node **);
void display(struct node *);
void main()
{
	struct node *root;
	int ans,num;
	root = NULL;
	while(ans!=3)
	{
		system("cls");
		display(root);
		printf("\nEnter 1 to insert");
		printf("\nEnter 2 to delete");
		printf("\nEnter your choice ");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:
				printf("\nEnter value to be inserted ");
				scanf("%d",&num);
				add(&root,num);
				break;
			case 2:
				del(&root);
				break;
			case 3:
				exit(1);
		}
	}
}
void add(struct node **q, int num)
{
	struct node *temp;
	temp = malloc(sizeof(struct node));
	temp->data = num;
    if(*q==NULL||(*q)->data>num)
    {
    	temp->next=*q;
    	*q = temp;
    }
    else
    {
    	struct node *r=*q;
    	while(r!=NULL)
    	{
    		if((r->data<=num)&&(r->next->data>num))
    		{
    			temp->next=r->next;
    			r->next=temp;
    		}
    		r=r->next;
    	}
    }
}
void del(struct node **q)
{
	struct node *temp;
	temp=*q;
	if(temp==NULL)
	  printf("The List is Empty");
	else
	{
		*q = temp->next;
		free(temp);
	}
}
void display(struct node *q)
{
	while(q!=NULL)
	{
		printf("%d ",q->data);
		q=q->next;
	}
}

