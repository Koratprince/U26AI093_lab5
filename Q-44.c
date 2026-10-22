#include<stdio.h>
int main()
{
    int a[10],oddcount=0,evencount=0,i;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
    if(a[i]%2==0)
    {
        evencount++;

    }
    else{
        oddcount++;
    }
    }
    printf("the number of even number is %d\n",evencount);
    printf("the number of odd number is %d\n",oddcount);

}