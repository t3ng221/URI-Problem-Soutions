#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    c = 24;
    d = (24-(a-b));
    e = (b-a);
    if(a==b)
    printf("O JOGO DUROU %d HORA(S)\n",c);
    else if(a<b)
    printf("O JOGO DUROU %d HORA(S)\n",e);
    else
    printf("O JOGO DUROU %d HORA(S)\n",d);
    return 0;
}
