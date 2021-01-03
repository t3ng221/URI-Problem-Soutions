#include <stdio.h>
void main()
{
    double N1,N2,N3,N4,A,B,C,D,M,E,F;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    A = (N1*2);
    B = (N2*3);
    C = (N3*4);
    D = (N4*1);
    M = ((A+B+C+D)/10.0);
    printf("Media: %.1lf\n",M);
    if (M>=7.0)

        printf("Aluno aprovado.\n");

    else if (M<5.0)

        printf("Aluno reprovado.\n");

    else {
        printf("Aluno em exame.\n");

    scanf("%lf",&E);

    printf("Nota do exame: %.1lf\n",E);

    F = (M+E)/(2);

    if(F>=5.0)

        printf("Aluno aprovado.\n");

    else if (F<=4.9)

        printf("Aluno reprovado.\n");

    printf("Media final: %.1lf\n",F);
}

}

