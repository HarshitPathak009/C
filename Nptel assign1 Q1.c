#include<stdio.h>
typedef struct 
{ 
  int aData;
  int bData;
  union 
  {
    int aData;
    int bData;
  }u;
}DATA;
int main()
{
	DATA s;
   s.aData = 10;
   s.bData = 30;
   //s.u.aData = 30;
   s.u.bData = 1000;
   printf("%d %d %d %d",s.aData,s.bData,s.u.aData,s.u.bData);
   return 0;
}
