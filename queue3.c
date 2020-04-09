#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void display(int arr[], int front, int rear);
int push(int arr[], int front, int rear);
int pop(int arr[],int front, int rear);
void main()
{
	int ans, num,data;
	int front=-1;
	int rear=-1;
	int arr[MAX];
	while(ans!=3)
	{
		system("cls");
		display(arr,front,rear);
		printf("\n \t 1 PUSH");
		printf("\n \t 2 POP");
		printf("\n \t 3 EXIT");
		printf("\n \t Enter Choice");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:
                rear=push(arr,front,rear);
				if (front==-1)
				    front=0;                
				break;
			case 2:
                front=pop(arr,front,rear);
                if(front==-1)
                   rear=-1;
				break;
			case 3:
				exit(1);
		}
	}
}
int push(int arr[], int front, int rear)
{
	            int num;
				printf("\n\t Enter Element");
				scanf("%d",&num);
				if(rear==MAX-1)
				{
					printf("\n\t Overflow");
					getch();
				}
				else
				{
					rear = rear+1;
					arr[rear]=num;
				}
				return rear;
}
 int pop(int arr[], int front, int rear)
{
				if(front==-1)
				{
					printf("\n\t Empty");
					getch();
				}
				else
				{
					int data = arr[front];
					if(front==rear)
				       front=rear=-1;
				    else
				      front++;
				}
				return front;
}
void display(int arr[], int front, int rear)
{
	int i;
	printf("Front");
	for(i=front;i<=rear;i++)
		  printf(" %d",arr[i]), printf("  Rear");
}
