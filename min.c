#include <stdio.h> // including header file for input and output
int main() // main method the compiler looks for this in the program
{
	int t,n1,n2,n3,i,c,m; //declaring variables of int type as per requirments
	scanf("%d",&t); //taking value from user in the variable t. the %d defines that the input is of integer type
	while(t>0) //the loop will execute till t>0 as t<=0 it will no more execute the codes within its body
	{
		scanf("%d %d %d",&n1,&n2,&n3);//taking value from user in the variables n1,n2,n3
		c = 0; // initializing c to zero since it counts the number of common factors
        //the following segment is to find the minimum of the three
        if(n1<n2)
        {
        	if(n1<n3)
        	 m = n1;
        	else
        	  m=n3;
        }
        else if(n2<n3)
        {
        	m = n2;
        }
        else
           m = n3;
        //the following is to find the common factors of the three
        for(i=1;i<=m;i++) //try changing the conditions and see the difference to learn about for loop
        {
        	if(n1%i==0 && n2%i==0 && n3%i==0)
        	    c+=1; //c+=1 is equavalent to c=c+1
        }
        printf("The number of common factors are \n %d",c); // \nis used to move to next line
		t--; // t-- is equalt to t=t-1. Reducing t as per the requirment 
	}
} // see the difference in printf and scanf
