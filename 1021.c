#include <stdio.h>
int main()
{
    double N;
    int A,B,C,D,E,F,G,H,I,J,K,L,M;
    scanf("%lf\n",&N);
    M = N*100;
    A = M/10000;
    M = M%10000;
    B = M/5000;
    M = M%5000;
    C = M/2000;
    M = M%2000;
    D = M/1000;
    M = M%1000;
    E = M/500;
    M = M%500;
    F = M/200;
    M = M%200;
    G = M/100;
    M = M%100;
    H = M/50;
    M = M%50;
    I = M/25;
    M = M%25;
    J = M/10;
    M = M%10;
    K = M/5;
    M = M%5;
    L = M/1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",A);
    printf("%d nota(s) de R$ 50.00\n",B);
    printf("%d nota(s) de R$ 20.00\n",C);
    printf("%d nota(s) de R$ 10.00\n",D);
    printf("%d nota(s) de R$ 5.00\n",E);
    printf("%d nota(s) de R$ 2.00\n",F);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.0\n",G);
    printf("%d moeda(s) de R$ 0.50\n",H);
    printf("%d moeda(s) de R$ 0.25\n",I);
    printf("%d moeda(s) de R$ 0.10\n",J);
    printf("%d moeda(s) de R$ 0.05\n",K);
    printf("%d moeda(s) de R$ 0.01\n",L);
    return 0;

}
