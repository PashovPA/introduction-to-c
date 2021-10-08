#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Определение количества дней в году*/
/*Пашов Павел*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    printf("Введите год\n");
    scanf("%d",&a);
    if ((a%100==0) && (a%400!=0) || (a%4!=0)) printf("365");
    else printf("366");
    return 0;
}
