#include <stdio.h>
int main()
{
    int a,b,c;
    double z;
    scanf("%d %d",&a,&b);
    c = a*b;
    z = (c/12.0);
    printf("%.3lf\n",z);
    return 0;
}
