#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list *next;
}list;
list *head =NULL;
int main()
{
   int a;
   void input(int n);
   void display();
   void last();
   do
   {
   	printf("Enter 1 to enter element\n");
   	printf("Enter 2 to display elements\n");
   	printf("Enter 3 to delete last element");
   	scanf("%d",&a);
   	switch(a)
   	{
   		case 1:
   			printf("Enter number to be inserted\n");
   			scanf("%d",&a);
   			input(a);
   			break;
   		case 2:
   			display();
   			break;
   		case 3:
   			last();
   			break;
   		default:
   			printf("Wrong Choice \n \n");
   			break;
   	}
   	printf("Enter 1 to continue\n");
   	scanf("%d",&a);
   }while(a==1);
   return 1;
}
void input(int n)//method to add at end
{
	list *new;
	new = (list*)malloc(sizeof(list)); //necessary to assign new nodes a memory allocation
	new->data = n;
	new->next = NULL;
	if(head==NULL)
	 head = new;
	else
	{
	   list *net = head;
       while(net->next!=NULL)
          net = net->next;
       net->next = new;
	} 
}
void display()
{
	list *net = head;
	while(net!=NULL)
	{
		printf("%d \n",net->data);
		net = net->next;
	}
}


void last()
{
		list *temp = head;
		if(temp->next!=NULL)
		{
		while(temp->next->next!=NULL)
		{	temp = temp->next;
			
		}	
		free(temp->next);
		temp -> next =NULL;
	}
	else 
	{
		free(temp);
		head = NULL;
	}
}
