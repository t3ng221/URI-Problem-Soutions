#include <stdio.h>
void main ()
{
    int n,i;
    double a,b,c,ave;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        ave = ((a*2)+(b*3)+(c*5))/10.0;
         printf("%.1lf\n",ave);
    }
}
