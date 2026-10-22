#include<stdio.h>
int main()
{
    int a[10],b[10],temp,i;
    printf("enter 10 elements of array A:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter 10 elements of array B:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
    }
    printf("array swapped \n");
    printf("after swapping A:");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("after swapping B:");
    for(i=0;i<10;i++)
    {
        printf("%d\n",b[i]);
    }

}