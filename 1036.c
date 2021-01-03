#include <stdio.h>
#include <math.h>
int main ()
{
    double A,B,C,R1,R2,F;
    scanf("%lf %lf %lf",&A,&B,&C);
    F = sqrt((B*B)-(4*A*C));
    R1 = ((-B + F)/(2*A));
    R2 = ((-B - F)/(2*A));

    if ((A!=0) && (F>0))
    {
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    else
    {
       printf("Impossivel calcular\n");
    }
    return 0;
}
