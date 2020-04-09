#include<stdio.h>
void main()
{
	int n,i,k,j,temp;
	printf("Enter number of elements in the array ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Entered elements of array are\n");
	for(i=0;i<n;i++)
	   printf("%d \t",a[i]);
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j>=0;j--)
		{
			if(a[j]<a[j-1])
			{
				temp = a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		for(k=0;k<n;k++)
	       printf("%d \t",a[k]);
	    printf("\n");
	}
	printf("Entered elements of sorted array are\n");
	for(i=0;i<n;i++)
	   printf("%d \t",a[i]);
}
