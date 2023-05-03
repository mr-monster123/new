#include<stdio.h>
int main()
{
    int n,i,x,t;
    printf("Enter number of member in array\n");
    scanf("%d",&n);

    int a[n];
    int b[n];

    printf("Enter members of array\n");

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number to be rotated");
    scanf("%d",&x);

    t=n-x;
    for (i=0;i<x;i++)
    { 
        b[i]=a[t];
        t++;
    }
    for (i=0;i<n-x;i++)
    { 
        b[i+x]=a[i];
        t++;
    }
    printf("New array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    }
