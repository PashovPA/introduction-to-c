#include "intlist.h"

int main()
{
    loop_list loop_init ()
    {
        loop_list l;
        l.current = NULL;
        return l;
    }
    setlocale(LC_ALL, "Rus");
    loop_list l = loop_init();
    loop_list p = loop_init();
    int i,k;
    int b = 0;
    int q = 0;
    printf("1. ������� � ���������� � ����������� ��������\n");
    printf("2. ������� �������� ����� � ����� �������\n");
    printf("3. �������� ��������, ����������� ��� ������������ ��������\n");
    printf("4. �������� ����� ������\n");
    printf("5. ����� ���� ��������� ������ �� �����\n");
    printf("0. ����� \n");
    while (q =! 0)
    {
        scanf("%d", &i);
        switch (i)
        {
        case 1 :
            printf("1.���������� \n2.c��������\n");
            scanf(" %d", &k);
            if (k == 1)
            {
                if (loop_prev(&l) == 0)
                {
                    break;
                }
                else return -1;
            }
            else
            {
                if (loop_next(&l) ==0)
                {
                    break;
                }
                else return -1;
            }
        case 2 :
            printf("1. �� \n2. ����� \n");
            scanf(" %d", &k);
            printf("����� ��� �������\n");
            scanf(" %d", &b);
            if (k == 1) loop_insert_prev(&l, b);
            else loop_insert_next(&l, b);
            break;
        case 3 :
            printf("1.�������\n2.���������� \n3.���������\n");
            scanf(" %d", &k);
            if (k == 1) if (loop_delete_cur(&l) == 0)
            {
                break;
            }
            else return -1;
            if (k == 2) if (loop_delete_prev(&l) == 0)
            {
                break;
            }
            else return -1;
            if (k == 3) if (loop_delete_next(&l) == 0)
            {
                break;
            }
            else return -1;
        case 4 :
            printf("����������� � ������ � 'p'.\n");
            loop_copy(&l, &p);
            break;
        case 5 :
            printf("����� ������\n");
            loop_print(&l);
            break;
        case 0 :
            return 0;
        }
    }
    return 0;
}
