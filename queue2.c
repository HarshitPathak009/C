#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct queue
{
	int arr[MAX];
	int front,rear;
};
void display(struct queue);
struct queue push(struct queue);
struct queue pop(struct queue);
void main()
{
	struct queue q;
	int ans, num,data;
	q.front=-1;
	q.rear=-1;
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
                q=push(q);
				break;
			case 2:
                q=pop(q);
				break;
			case 3:
				exit(1);
		}
	}
}
struct queue push(struct queue q)
{
	            int num;
				printf("\n\t Enter Element");
				scanf("%d",&num);
				if(q.rear==MAX-1)
				{
					printf("\n\t Overflow");
					getch();
				}
				else
				{
					q.rear = q.rear+1;
					q.arr[q.rear]=num;
				}
				if (q.front==-1)
				    q.front=0;
				return q;
}
struct queue pop(struct queue q)
{
				if(q.front==-1)
				{
					printf("\n\t Empty");
					getch();
				}
				else
				{
					int data = q.arr[q.front];
					if(q.front==q.rear)
				       q.front=q.rear=-1;
				    else
				      q.front++;
				}
				return q;
}
void display(struct queue q)
{
	int i;
	printf("Front");
	for(i=q.front;i<=q.rear;i++)
	{
		  printf(" %d",q.arr[i]);
	}
	printf("  Rear");
}
