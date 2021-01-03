#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
            printf("0\n");
        }
        if(b%2!=0)
        {
            printf("1\n");
        }
    }
    return 0;
}
