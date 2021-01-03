#include <stdio.h>
void main ()
{
    double a,b,c,d,e,f;
    scanf("%lf",&a);
    b = ((a*15)/100);
    c = (a*12)/100;
    d = (a*10)/100;
    e = (a*7)/100;
    f = (a*4)/100;
    if(a<=400.00)
    {
        printf("Novo salario: %.2lf\n",a+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 15 %%\n");

    }
    else if (a>=400.01 && a<=800.00)
    {
         printf("Novo salario: %.2lf\n",a+c);
        printf("Reajuste ganho: %.2lf\n",c);
        printf("Em percentual: 12 %%\n");
    }
    else if(a>=800.01 && a<=1200.00)
    {
         printf("Novo salario: %.2lf\n",a+d);
        printf("Reajuste ganho: %.2lf\n",d);
        printf("Em percentual: 10 %%\n");
    }
    else if(a>=1200.01 && a<=2000.00)
    {
         printf("Novo salario: %.2lf\n",a+e);
        printf("Reajuste ganho: %.2lf\n",e);
        printf("Em percentual: 7 %%\n");
    }
    else
    {
         printf("Novo salario: %.2lf\n",a+f);
        printf("Reajuste ganho: %.2lf\n",f);
        printf("Em percentual: 4 %%\n");
    }

}
