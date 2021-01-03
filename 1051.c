#include<stdio.h>
void main()
{
    double a,b,c,d,e,f,g,h;
    scanf("%lf",&a);
    if(a>=0 && a<=2000.00)
    {
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000.00)
    {
        b=(a-2000)*0.08;

        printf("R$ %.2lf\n",b);
    }
    else if(a>=3000.01 && a<=4500.00)
    {
        c=a-2000;
        c=c-1000;
        d=1000*0.08;
        e=(c*0.18)+d;
        printf("R$ %.2lf\n",e);

    }
    else
    {
        f=a-4500;
        d=1000*0.08;
        g=(1500*0.18);
        h=(f*0.28);
        printf("R$ %.2lf\n",(d+g+h));
    }

}
