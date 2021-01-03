#include <stdio.h>
int main ()
{
    int N,b,c,d;
    scanf("%d",&N);
    b = N/3600;
    N = N%3600;
    c = N/60;
    d = N%60;
    printf("%d:%d:%d\n",b,c,d);
    return 0;
}
