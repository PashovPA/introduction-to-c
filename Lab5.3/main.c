#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a,b,c;
    printf("Введите число\n");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    if ((a>=10) && (a<=19))
    switch(a) {
    case 10: printf("десять рублей"); break;
    case 11: printf("одинадцать рублей"); break;
    case 12: printf("двинадцать рублей"); break;
    case 13: printf("тринадцать рублей"); break;
    case 14: printf("четырнадцать рублей"); break;
    case 15: printf("пятнадцать рублей"); break;
    case 16: printf("шестнадцать рублей"); break;
    case 17: printf("семнадцать рублей"); break;
    case 18: printf("восемнадцать рублей"); break;
    case 19: printf("девятнадцать рублей"); break;
    }
    else
    {
    switch(b) {
    case 2: printf("двадцать "); break;
    case 3: printf("тридцать "); break;
    case 4: printf("сорок "); break;
    case 5: printf("пятьдесят "); break;
    case 6: printf("шестьдесят "); break;
    case 7: printf("семдесят "); break;
    case 8: printf("восемдесят "); break;
    case 9: printf("девяносто "); break;}

    switch(c) {
    case 0: printf("рублей"); break;
    case 1: printf("один рубль"); break;
    case 2: printf("два рубля"); break;
    case 3: printf("три рубля"); break;
    case 4: printf("четыре рубля"); break;
    case 5: printf("пять рублей"); break;
    case 6: printf("шесть рублей"); break;
    case 7: printf("семь рублей"); break;
    case 8: printf("восемь рублей"); break;
    case 9: printf("вевять рублей"); break;}}
    return 0;
}
