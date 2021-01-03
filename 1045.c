#include <stdio.h>
int main()
{
    double A,B,C,tmp;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A<B)
     {
        tmp=A;
        A=B;
        B=tmp;

    }
    if(A<C)
    {
        tmp=A;
        A=C;
        C=tmp;

    }
    if(B<C)
    {
        tmp=B;
        B=C;
        C=tmp;
    }
    if(A>=B+C)
    {
        printf("NAO FORMA TRIANGULO\n");

    }
    else if((A*A)==((B*B)+(C*C)))
    {
        printf("TRIANGULO RETANGULO\n");

    }

    else if((A*A)<((B*B)+(C*C)))
    {
        printf("TRIANGULO ACUTANGULO\n");

    }
    else
    {
        printf("TRIANGULO OBTUSANGULO\n");
        }

    if(A==B && B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A==B || B==C)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;

}
