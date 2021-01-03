#include<stdio.h>
void main()

{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A+B<=C && B+C<=A  A && A+C<=B)
    printf("NAO FORMA TRIANGULO\n");
    else if((A*A)==(B*B)+(C*C))
    printf("TRIANGULO RETANGULO\n");
    else if((A*A)>((B*B)+(C*C)))
    printf("TRIANGULO OBTUSANGULO\n");
    else if((A*A)<((B*B)+(C*C)))
    printf("TRIANGULO ACUTANGULO\n");
    if(A==B && B==C && C==A)
    printf("TRIANGULO EQUILATERO\n");
    else if(A==B || A==C || B==C)

    printf("TRIANGULO ISOSCELES\n");





}
