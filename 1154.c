#include<stdio.h>
int main()
{
    int a,b=0,c=0;
    float d;
    while(scanf("%d",&a)!=EOF)
    {
        if(a>0)
        {
            b+=a;
            c++;
        }
        if(a<0)
        {
            break;
        }

    }
    d=b*1.0/c*1.0;
    printf("%.2f\n",d);

}
