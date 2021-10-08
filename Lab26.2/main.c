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
    printf("1. переход к следующему и предыдущему элементу\n");
    printf("2. вставка элемента после и перед текущим\n");
    printf("3. удаление текущего, предыдущего или последующего элемента\n");
    printf("4. создание копии списка\n");
    printf("5. вывод всех элементов списка на экран\n");
    printf("0. выход \n");
    while (q =! 0)
    {
        scanf("%d", &i);
        switch (i)
        {
        case 1 :
            printf("1.предыдуший \n2.cледующий\n");
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
            printf("1. До \n2. После \n");
            scanf(" %d", &k);
            printf("число для вставки\n");
            scanf(" %d", &b);
            if (k == 1) loop_insert_prev(&l, b);
            else loop_insert_next(&l, b);
            break;
        case 3 :
            printf("1.Текущий\n2.Предыдущий \n3.Следующий\n");
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
            printf("Копирование в списка в 'p'.\n");
            loop_copy(&l, &p);
            break;
        case 5 :
            printf("вывод списка\n");
            loop_print(&l);
            break;
        case 0 :
            return 0;
        }
    }
    return 0;
}
