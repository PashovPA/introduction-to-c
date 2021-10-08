#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*ќпределение старшего человка из пары*/
/*ѕашов ѕавел*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int n,m,k,a,b,c,f,g;
    printf("¬ведите год, мес€ц и дату рождени€ первого человека\n");
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    printf("¬ведите год, мес€ц и дату рождени€ второго человека\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    f=10000*n+100*m+k;
    g=10000*a+100*b+c;
    if (f<g) printf("ѕервый человек старше");
    else if (f>g) printf("¬торой человек старше");
    else printf("Ћюди одного возраста");
    return 0;
}
