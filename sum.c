#include<stdio.h>
int main()
{
	int a,b,i,sum=0;
	printf("Enter the range\n");
	scanf("%d%d",&a,&b);
	if(b<a)
	{
		int t = a;
		a= b;
		b=t;
	}
	for(i=a;i<=b;i++)
	{
	   sum=sum+i;
    }
	printf("The sum of numbers in the given range is %d \n",sum);
     return 0;
}
