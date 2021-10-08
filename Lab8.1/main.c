#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Определение цифрового корня числа*/
/*Пашов Павел*/

int  S (int  x, int p)
{
    int Sum=0;
    while(x!=0)
    {
       Sum=Sum + x%p;
       x=x/p;
    }
    return Sum;
}
int  DR (int  n, int  p)
{
    if (n < p) return n;
    else {
            while(n>=p) n=S(n,p);
            return n;
         }
}
int main()
{
    int n,p;
    setlocale(LC_ALL, "Rus");
    printf("Введите число\n");
    scanf("%d", &n);
    printf("Введите систему счисления\n");
    scanf("%d", &p);
    printf("Значение функции = %d",DR(n,p));
    return 0;
}
