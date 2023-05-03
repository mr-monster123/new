#include<stdio.h>
main()
{
    int i,n,sa=0,sb=0;
    printf("Enter the number of turns");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter points of 1st person");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter points of 2nd person");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i>1)
        {
            if((a[i-1]==10)||(a[i-2]==10))
            {
                sa=sa+(a[i]*2);
            }
            else
            {
                sa=sa+a[i];
            }
        }
        else
        {
            sa=sa+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i>1)
        {
            if((b[i-1]==10)||(b[i-2]==10))
            {
                sb=sb+(b[i]*2);
            }
            else
            {
                sb=sb+b[i];
            }
        }
        else
        {
            sb=sb+b[i];
        }
    }
    printf("Total score \n1st person: %d \n2nd person: %d",sa,sb);
}
