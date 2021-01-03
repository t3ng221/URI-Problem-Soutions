#include <stdio.h>
int main ()
{
    char z[29];
    double a,b,d,e;
    scanf("%s",&z);
    scanf("%lf %lf",&a,&b);
    d = (b*15)/(100);
    e = a+d;
    printf("TOTAL = R$ %.2lf\n",e);
    return 0;

}
