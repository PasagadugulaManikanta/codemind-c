#include<stdio.h>
int main()
{
    int a,b,sum=0,pro=1;
    scanf("%d",&a);
    while(a!=0)
  {
    b=a%10;
    a=a/10;
    sum+=b;
    pro*=b;
}
    if(sum==pro)
    {
    	printf("Spy Number");
	}
	else
	{
		printf("Not Spy Number");
	}
    
}