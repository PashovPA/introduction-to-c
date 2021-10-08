#include "integration.h"
#include "proto.h"


int main()
{
    setlocale(LC_CTYPE,"RUS");
    double l,r;
    int k=0,f_type;
    printf("Выберите прототип функции\n 1.ax^2+bx+c\n 2.a*ln(|b*x|)+d\n");
    scanf("%i",&f_type);

    switch(f_type)
    {
    case 1 :
        {
            double p[3];
            printf("Введите пределы интегрирования, число точек разбиения и параметры функции\n");
            scanf("%lf %lf %d",&l,&r,&k);
            scanf("%lf %lf %lf",&p[0],&p[1],&p[2]);
            printf("%lf",middle_rectangle(k,l,r,&poly_deg_2,p));
            break;
        }
    case 2 :
    {
        double p[3];
        printf("Введите пределы интегрирования, число точек разбиения и параметры функции\n");
        scanf("%lf %lf %d",&l,&r,&k);
        scanf("%lf %lf %lf",&p[0],&p[1],&p[2]);
        printf("%lf",middle_rectangle(k,l,r,&logrfm,p));
        break;
    }

    default:{printf("Ошибка ввода");}
    }

    return 0;
}
