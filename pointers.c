#include<stdio.h>
int main()
{
	int *q, p;
	scanf("%d",&p);
	q = &p;
	*q =10;
	printf("%d %u %d %u",*q,q,p,&p);
}
