#include<stdio.h>
void product(int);
int main()
{
    int a[10],pr=1;
    printf("Enter  element of array");
    for(i=0;i<10;1++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;1++)
    {
        pr=pr*a[i];
    }
    int product(pr);
}
void product(int k)
{
    if(k>0)
    printf("1");
    else if(k<0)
    printf("-1");
    else
    printf("0");
}