#include<stdio.h>
#include<stdlib.h>
typedef struct nodes
{
	int data;
	struct nodes *left; 
	struct nodes *right;
}nodes;
nodes *head;
int main()
{
    int a;
	void input(int n);
	void display(nodes *start);
	void displaypre(nodes *start);
	void displaypt(nodes *start);
	do
	{
		printf("Enter 1 to insert element\n");
		printf("Enter 2 to display inorder traversal\n");
		printf("Enter 3 to display preorder traversal\n");
		printf("Enter 4 to display postorder traversal\n");
		printf("Enter your choice\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("Enter number to be inserted\n");
				scanf("%d",&a);
				input(a);
				break;
		    case 2:
		    	display(head);
		    	printf("\n");
		    	break;
		    case 3:
		    	displaypre(head);
		    	printf("\n");
		    	break;
		    case 4:
		    	displaypt(head);
		    	printf("\n");
		    	break;
		    default:
			  printf("Invalid Choice\n");
			  break;	
		}
		printf("Enter 1 to continue\n");
		scanf("%d",&a);
	}while(a==1);
	return 56;
}
void input(int n)
{
     nodes *new= (nodes*) malloc(sizeof(nodes));
	(*new).data = n;
	new->right = NULL;
	new->left = NULL;
	 if(head==NULL)
	   head = new;
	 else
	 {
	 	nodes *p = head;
	 	while(1)
	 	{
	 		if(p->data>n)
	 		{
	 			if(p->left==NULL)
	 			{
	 			   p->left = new;
	 			   break;
	 		    }
				else
				   p = p->left;
	 		}
	 		else
	 		{
	 			if(p->right==NULL)
	 			{
	 			   p->right = new;
	 			   break;
	 	     	}
				else
	 			   p = p->right;
	 		}
	 	}
	 }
}
void display(nodes *start)
{
	if(start!=NULL)
	{
		display(start->left);
		printf("%d ",(*start).data);
		display(start->right);
	}
}
void displaypre(nodes *start)
{
	if(start!=NULL)
	{
	    printf("%d ",(*start).data);
		display(start->left);
		display(start->right);
	}
}
void displaypt(nodes *start)
{
	if(start!=NULL)
	{
		display(start->left);
		display(start->right);
		printf("%d ",(*start).data);
	}
}
