#include <locale.h>
#include "splitstringsorted.h"

#define LENGTH 10000

int main()
{
    setlocale(LC_CTYPE, "Russian");
    char a[LENGTH];
    int arr[LENGTH];
    printf("������� ������ : \n");
    if (fgets(a, LENGTH, stdin) == NULL)
    {
        printf("�������� ����!\n");
        return 1;
    }
    char **words = malloc(LENGTH / 2 + 1); /* ����� ���� �� ������ ��� (n/2 + 1) ����, ��� n - ���-�� ��������*/
    char *buffer = malloc(LENGTH);
    int l = splitstringsorted(a, buffer, words, " ,.!?-\n\t", arr);
    printf("��������� ���� � ������ : %d\n��������� ������������� ������� :\n", l);
    int i = 0;
    while(*(words + i) != NULL)
    {
        if ( *(words[i]) ) printf("�����: \"%s\"\ ����� ��������� : %d\n������� ��������� : %d%%\n", *(words + i), arr[i], arr[i]*100/l);
        ++i;
    }
    free(words);
    free(buffer);
    return 0;
}
