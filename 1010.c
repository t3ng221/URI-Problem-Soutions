#include <stdio.h>
int main ()

{
      double a,b,c,d,e,f,sum1;
      scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
      sum1 = ((b*c)+(e*f));
      printf("VALOR A PAGAR: R$ %.2lf\n",sum1);
      return 0;
}
