#include<stdio.h>
void main()
{
    int i,n,p,max=0;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&n);
        if(n>max)
        {
            max=n;
            p=i;
        }
    }
    printf("%d\n%d\n",max,p);
}
