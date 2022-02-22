#include<stdio.h>
int main()
{
    int i,a,k=0;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        k+=i;
    }
    printf("%d",k);
}