#include<stdio.h>
int main()
{
    int a[10],pos=0,neg=0,zero=0,i;
    for(i=0;i<10;i++)
    {
        printf("enter element %d:",i);
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            pos++;
        }
        else if(a[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        printf("the total negative num:%d\n",neg);
        printf("the total positive num:%d\n",pos);
        printf("total zero:%d",zero);
    }
    

}
