#include<stdio.h>
void main()
{
    int a,b,d1,d2,l=0;
    scanf("%d %d %d %d",&a,&b,&d1,&d2);
    while(a>0)
    {
        a = a-d1;
        l++;
    }
    printf("%d\n",(b+l*d2));
}
