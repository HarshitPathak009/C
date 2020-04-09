#include<stdio.h>
int main()
{
	void prime(int *n);
	int a;
	scanf("%d",&a);
	prime(&a);
    return 6;	
}
void prime(int *n)
{
	int i, c=0;
	for(i=2;i<*n;i++)
	{
		if(*n%i==0)
		{
			c++;
			break;
		}
	}
	if(c==1)
	 printf("NOT Prime");
	else
	  printf("IS Prime");
}

