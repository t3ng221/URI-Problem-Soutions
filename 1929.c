#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b>c || a+b>d)
    {
        printf("S\n");
    }
    else if(b+c>a || b+c>d)
    {
        printf("S\n");
    }
    else if(c+d>a || c+d>b)
    {
        printf("S\n");
    }
    else if(a+d>c || a+d>b)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
}
