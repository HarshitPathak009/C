#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,i,j,sum,c=0;
    scanf("%d %d %d",&a,&b,&k);
    int chkprime(int n);
    printf("%d %d %d\n",a,b,k);
    for(i=a;i<b;i++)
    {
        j=i;
        sum=0;
        while(j>0)
        {
           sum+=j%10;
           j/=10;
        }
        j=chkprime(sum);
        if(j==1&&i%k==0)
        {
          printf("%d\n",i);
          c++;
        }
    }
    printf("%d",c);
}
int chkprime(int n)
{
    int i;
    if(n==1)
      return 0;
    else
    {
        for(i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
              return 0;
        }
        return 1;
    }
}
