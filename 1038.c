#include <stdio.h>
void main()
{
    double P,Q,R,S,T;
    P = 4.00;
    Q = 4.50;
    R = 5.00;
    S = 2.00;
    T = 1.50;
    int X,Y;
    scanf("%d %d",&X,&Y);

    if (X==1)
  {
     printf("Total: R$ %.2lf\n",(Y*P));
  }
    else if (X==2)
    {
        printf("Total: R$ %.2lf\n",(Y*Q));
    }
    else if (X==3)
    {
        printf("Total: R$ %.2lf\n",(Y*R));
    }
    else if (X==4)
    {
         printf("Total: R$ %.2lf\n",(Y*S));
    }

    else
    {
        printf("Total: R$ %.2lf\n",(Y*T));
    }
}
