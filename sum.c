#include<stdio.h>
int main()
{
    int  n,i,j,y,s=0;
    printf("Enter the number of member in array\n ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the members of arrray\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        y=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                y++;
            }
        }
        if(y<2)
        {
            s=s+a[i];
        }
    }
    printf("Sum of distict members of array is %d",s);
}