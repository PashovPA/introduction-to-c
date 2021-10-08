#include "sort_check.h"

int main()
{
    setlocale (LC_CTYPE,"Russian");
    int a;
    scanf("%i",&a);
    size_t s1=a;
    int a_nmb[s1];
    int_scan(a_nmb,a);

    switch (sort_check(a_nmb,a))
    {
        case -1: {printf("Последовательносить убывает"); break;}
        case  0: {printf("Последовательносить не является монотонной"); break;}
        case  1: {printf("Последовательносить возрастает"); break;}
        case  2: {printf("Все элементы последовательности равны"); break;}
    };
    return 0;
}
