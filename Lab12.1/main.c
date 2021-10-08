#include "in_out.h"

int main()
{
    int a,b;
    scanf("%i %i",&a,&b);
    size_t s1=a, s2=b;
    int a_nmb[s1];
    double b_nmb[s2];
    int_scan(a_nmb,a);
    double_scan(b_nmb,b);
    int_print(a_nmb,a);
    double_print(b_nmb,b);
    return 0;
}
