#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a,b,c;
    printf("������� �����\n");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    if ((a>=10) && (a<=19))
    switch(a) {
    case 10: printf("������ ������"); break;
    case 11: printf("���������� ������"); break;
    case 12: printf("���������� ������"); break;
    case 13: printf("���������� ������"); break;
    case 14: printf("������������ ������"); break;
    case 15: printf("���������� ������"); break;
    case 16: printf("����������� ������"); break;
    case 17: printf("���������� ������"); break;
    case 18: printf("������������ ������"); break;
    case 19: printf("������������ ������"); break;
    }
    else
    {
    switch(b) {
    case 2: printf("�������� "); break;
    case 3: printf("�������� "); break;
    case 4: printf("����� "); break;
    case 5: printf("��������� "); break;
    case 6: printf("���������� "); break;
    case 7: printf("�������� "); break;
    case 8: printf("���������� "); break;
    case 9: printf("��������� "); break;}

    switch(c) {
    case 0: printf("������"); break;
    case 1: printf("���� �����"); break;
    case 2: printf("��� �����"); break;
    case 3: printf("��� �����"); break;
    case 4: printf("������ �����"); break;
    case 5: printf("���� ������"); break;
    case 6: printf("����� ������"); break;
    case 7: printf("���� ������"); break;
    case 8: printf("������ ������"); break;
    case 9: printf("������ ������"); break;}}
    return 0;
}
