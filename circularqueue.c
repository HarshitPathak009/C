#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct queue
{
	int arr[MAX];
	int front;
	int rear;
};
void display(struct queue q);
void main()
{
	struct queue q;
	int i, ans, num, data;
	q.front=-1;
	q.rear=-1;
	for(i=0;i<MAX;i++)
	{
		q.arr[i]=0;
	}
	while(ans!=3)
	{
		system("cls");
		display(q);
		printf("\n \t 1 PUSH");
		printf("\n \t 2 POP");
		printf("\n \t 3 EXIT");
		printf("\n \t Enter Choice");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:
				printf("Insert Element");
				scanf("%d",&num);
				if(q.front==q.rear||q.rear==MAX-1)
				{
					printf("OVERFLOW");
					getch();
				}
				else
				{
					q.rear++;
					q.arr[q.rear]=num;
				}
				if(q.front==-1)
				  q.front=0;
				break;
			case 2:
				if(q.front==-1)
				{
					printf("\n Queue is Empty");
					getch();
					break;
				}
				data = q.arr[q.front];
				q.arr[q.front]=0;
				if(q.front>=0&&q.rear==MAX-1)
				   q.rear=-1;
				else
				{
					if(q.front==MAX-1&&q.rear>=0)
					   q.front=0;
					else
					   q.front++;
				}
				if(q.front==q.rear)
				    q.front=q.rear=-1;				    
				break;
			case 3:
				exit(0);
		}
	}
}
void display(struct queue q)
{
	int i;
	for(i=0;i<MAX;i++)
	  printf("%d\n",q.arr[i]);
}
