#include<stdio.h>
int main()
{
    float A,u,v,w,x,y,b,c,d,e,f;
    scanf("%f",&A);
    u=(15*A)/(100.00);
    v=(12*A)/(100.00);
    w=(10*A)/(100.00);
    x=(7*A)/(100.00);
    y=(4*A)/(100.00);
    b=A+u;
    c=A+v;
    d=A+w;
    e=A+x;
    f=A+y;
    if(A>=0 && A<=400.00)
    {
    printf("Novo salario: %.2f\n",b);
    printf("Reajuste ganho: %.2f\n",u);
    printf("Em percentual: 15 %%\n");
    }
    else  if(A>400.00 && A<=800.00)
    {
        printf("Novo salario: %.2f\n",c);
        printf("Reajuste ganho: %.2f\n",v);
        printf("Em percentual: 12 %%\n");
    }
    else  if(A>800.00 && A<=1200.00)
    {
        printf("Novo salario: %.2f\n",d);
        printf("Reajuste ganho: %.2f\n",w);
        printf("Em percentual: 10 %%\n");
    }
    else  if(A>1200.00 && A<=2000.00)
    {
        printf("Novo salario: %.2f\n",e);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 7 %%\n");
    }

    else
    {
        printf("Novo salario: %.2f\n",f);
        printf("Reajuste ganho: %.2f\n",y);
        printf("Em percentual: 4 %%\n");
    }
    return 0;

}
