#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct stack
{
	int arr[MAX];
	int top;
};
void display(struct stack);
void main()
{
	struct stack s;
	int ans, num;
	s.top=-1;
	while(ans!=3)
	{
		system("cls");
		display(s);
		printf("\n \t 1 PUSH");
		printf("\n \t 2 POP");
		printf("\n \t 3 EXIT");
		printf("\n \t Enter Choice");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:
				printf("\n\t Enter Element");
				scanf("%d",&num);
				if(s.top==MAX-1)
				{
					printf("\n\t Stack is Full");
					getch();
				}
				else
				{
					s.top = s.top+1;
					s.arr[s.top]=num;
				}
				break;
			case 2:
				if(s.top==-1)
				{
					printf("\n\t Stack is Empty");
					getch();
				}
				else
				{
					s.top = s.top-1;
				}
				break;
			case 3:
				exit(1);
		}
	}
}
void display(struct stack s)
{
	int i;
	if(s.top>-1)
	{
		for(i=s.top;i>=0;i--)
		  printf("\n %d",s.arr[i]);
	}
	else
	  printf("\n STACK IS EMPTY");
}
