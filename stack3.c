#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int push(int arr[], int top);
int pop(int arr[], int top);
void display(int arr[],int);
void main()
{
	int arr[MAX];
	int ans, top=-1;
	while(ans!=3)
	{
		system("cls");
		display(arr,top);
		printf("\n \t 1 PUSH");
		printf("\n \t 2 POP");
		printf("\n \t 3 EXIT");
		printf("\n \t Enter Choice");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:
                top=push(arr,top);
				break;
			case 2:
                top=pop(arr,top);
				break;
			case 3:
				exit(1);
		}
	}
}
int push(int arr[], int top)
{
	 int num;
     printf("\n\t Enter Element");
	 scanf("%d",&num);
	 if(top==MAX-1)
	 {
		    printf("\n\t Stack is Full");
			getch();
	 }
	 else
	 {
		     top = top+1;
			 arr[top]=num;
	 }	
	 return top;
}
int pop(int arr[], int top)
{
	if(top==-1)
	{
		printf("\n\t Stack is Empty");
		getch();
	}
	else
	{
		top = top-1;
	}
	return top;
}
void display(int arr[], int top)
{
	int i;
	if(top>-1)
	{
		for(i=top;i>=0;i--)
		  printf("\n %d",arr[i]);
	}
	else
	  printf("\n STACK IS EMPTY");
}
