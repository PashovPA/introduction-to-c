#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


double sq(double a, double e)
{
    double x1, x2;
    x1=x2=a;
    if (a>=0)
    {
      do
         {
           x1=x2;
           x2=(x1+a/x1)/2;
         }
    while (fabs((x2-x1)/x2)>=e);
    return x2;
    }
    else return 0.0/0.0;
}
int main()
{
    double a, e;
    setlocale(LC_ALL, "Rus");
    printf("¬ведите число\n");
    scanf("%lf", &a);
    printf("¬ведите погрешность\n");
    scanf("%lf", &e);
    printf(" вадратный корень = %lf\n", sq(a,e));
    return 0;
}
