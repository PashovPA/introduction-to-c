#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Вычисление суммы цифр для числа в произвольной  сиситеме счсления*/
/*Пашов Павед*/

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, s=0;
    printf("Введите систему счисления\n");
    scanf("%d", &b);
    printf("Введите число\n");
    scanf("%d", &a);
    while (a!=0)
    {
        s=s+a%b;
        a=a/b;
    }
    printf("Сумма цифр равна = %d", s);
    return 0;
}
