#include<stdio.h>
void main()
{
    int m,n,i,j=0,k=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);

        if(m==0)
        {
             printf("NULL\n");
        }
        if(m>0 && m%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        if(m>0 && m%2==1)
        {
            printf("ODD POSITIVE\n");
        }
        if(m<0 && m%2==0)
        {
             printf("EVEN NEGATIVE\n");
        }
        if(m<0 && m%2!=-0)
        {
             printf("ODD NEGATIVE\n");
        }
    }
}
