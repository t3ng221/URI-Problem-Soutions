#include <stdio.h>
void main()
{
    double a,b,c,D,E;
    scanf("%lf%lf%lf",&a,&b,&c);
    D = ((c*(a+b))/(2.0));
    E = (a+b+c);
    if(a+b>c && b+c>a && a+c>b)

    {
        printf("Perimetro = %.1lf\n",E);
    }
    else
    {
        printf("Area = %.1lf\n",D);
    }

}
