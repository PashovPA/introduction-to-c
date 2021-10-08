#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Вычисление суммы цифр для числа в десятичной сиситеме счсления*/
/*Пашов Павед*/

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, s=0;
    printf("Введите число\n");
    scanf("%d", &a);
    while (a!=0)
    {
        s+=a%10;
        a/=10;
    }
    printf("Сумма цифр равна = %d", s);
    return 0;
}
