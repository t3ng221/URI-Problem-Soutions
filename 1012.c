#include <stdio.h>
int main ()
{
    double A,B,C,PI=3.14159,T1,RC,TR,QU,REC;
    scanf("%lf %lf %lf",&A,&B,&C);
    T1 = ((1.0/2)*A*C);
    RC = (PI*C*C);
    TR = ((A+B)*C)/(2);
    QU = (B*B);
    REC = (A*B);
    printf("TRIANGULO: %.3lf\n",T1);
    printf("CIRCULO: %.3lf\n",RC);
    printf("TRAPEZIO: %.3lf\n",TR);
    printf("QUADRADO: %.3lf\n",QU);
    printf("RETANGULO: %.3lf\n",REC);
    return 0;
}
