#include<stdio.h>
int main()
{
    int n;
    printf("Enter no element of array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        pr=pr*a[i];
    }
    if(pr>0)
    printf("1");
    else if(pr<0)
    printf("-1");
    else
    printf("0");
}