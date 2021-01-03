#include <stdio.h>
int main ()
{
    int N,A,B,C;
    scanf("%d",&N);
    A = N/365;
    N = N%365;
    B = N/30;
    C = N%30;
    printf("%d ano(s)\n",A);
    printf("%d mes(es)\n",B);
    printf("%d dia(s)\n",C);
    return 0;
}
