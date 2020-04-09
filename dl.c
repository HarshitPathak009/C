#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
void create(struct node **, int);
void addatbeg(struct node **, int);
void append(struct node *, int);
void addafter(struct node *, int, int);
void delbeg(struct node **);
void delmid(struct node *, int);
void dellast(struct node *);
void display(struct node *);
void main()
{
	struct node *root;
	int ans, num,loc;
	root = NULL;
	while(ans!=8)
	{
		system("cls");
		display(root);
		printf("\n 1 to Create List");
        printf("\n 2 to Insert First");
        printf("\n 3 to Insert Mid");
        printf("\n 4 to Insert at Last");
        printf("\n 5 to Delete from Begining");
        printf("\n 6 to Delete from Mid");
        printf("\n 7 to Delete from Last");
        printf("\n Enter your Choice  ");
        switch(ans)
        {
        	case 1:
        		printf("\n Insert Element");
        		scanf("%d",&num);
        		create(&root,num);
        		break;
        	case 2:
        		printf("\n Insert Element");
        		scanf("%d",&num);
        		addatbeg(&root,num);
        		break;
        	case 3:
        		printf("\n Insert Element");
        		scanf("%d",&num);
        		printf("\n Insert Location");
        		scanf("%d",&loc);
        		addafter(root,loc,num);
        		break;
        	case 4:
        		printf("\n Insert Element");
        		scanf("%d",&num);
        		append(root,num);
        		break;
        	case 5:
        		delbeg(&root);
        		break;
        	case 6:
        		printf("\n Insert a value");
        		scanf("%d",&loc);
        		delmid(root,loc);
        		break;
        	case 7:
        		dellast(root);
        		break;
        	case 8:
        		exit(1);
        }
	}
}
void create(struct node **q, int num)
{
	struct node *temp;
	if(*q==NULL)
	{
	   temp = malloc(sizeof(struct node));
	   temp->data =  num;
	   temp->next = NULL;
	   temp->prev=NULL
	   *q = temp; 
    }
    else
    {
    	printf("\n List Already Exists\n");
    	getch();
    }
}
void addatbeg(struct node **q, int num)
{
	struct node *temp;
	temp = malloc(sizeof(struct node));
	temp->data = num;
	temp->next = *q;
	temp->prev=NULL;
	*q->prev = temp;
	*q = temp;
}
void append(struct node *q, int num)
{
	struct node *temp;
	struct node *a=q;
	while(a->next!=NULL)
	  a = a->next;
	temp = malloc(sizeof(struct node));
	a->next = temp;
	temp->prev = a;
	temp->data = num;
	temp->next = NULL;
}
void addafter(struct node *q, int loc, int num)
{
	struct node *temp;
	struct node *a=q;
	int i;
	for(i=0;i<loc;i++)
	{
		q = q->next;
	}
	temp = malloc(sizeof(struct node));
	temp->data = num;
	temp->next = a->next;
	a->next->prev = temp;
	temp->prev = a;
	a->next = temp; 
}
void delbeg(struct node **q)
{
	struct node *temp = *q;
	*q->next->prev = NULL;
	*q = (*q)->next;
	free(temp);
}
void delmid(struct node *q, int d)
{
	struct node *a;
	while(q->data!=d)
	{
	    a=q;
		q=q->data;
    }
	a->next=q->next;
	q->next->prev = a;
	free(q);
}
void dellast(struct node *q)
{
	struct node *t = q;
	while(t->next->next!=NULL)
	    t=t->next;
	free(t->next);
	t->next=NULL;
}
void display(struct node *q)
{
	while(q!=NULL)
	{
		printf("%d\t",q->data);
		q=q->next;
	}
}
