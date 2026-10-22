#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    for(i=0;i<=9;i++)
    {
    printf("enter element %d:",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
    sum=sum+a[i];
    }
    printf("total sum is %d",sum);
    return 0;
}