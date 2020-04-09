#include<stdio.h>
void concatenate(int a[], int n)
{
   printf("%u %d",*a,n);
}
int main()
{
	int str[10]={1,2,3,4,5};
	concatenate(str,10);
	return 10;
}
