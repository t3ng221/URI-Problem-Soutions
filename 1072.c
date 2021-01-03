#include<stdio.h>
void main()
{
    int m,n,i,j=0,k=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        if(m>=10 && m<=20)
        {
            j++;
        }
        else
            {
                k++;
            }
    }
    printf("%d in\n%d out\n",j,k);
}
