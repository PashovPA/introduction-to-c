#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void pr(int m, int n, int d)
{
    int i, k;
    for(i=1; i <=m; ++i)
    {
        for(k=1; k<=n; ++k)
        {
            if (((i>d) && (i<=m-d) && (k>d) && (k <= n-d)))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int m, n, d;
    setlocale(LC_ALL, "Rus");
    printf("������� ����� �����\n");
    scanf("%d", &m);
    printf("������� ������ �����\n");
    scanf("%d", &n);
    printf("������� ������� �����\n");
    scanf("%d", &d);
    pr(m,n,d);
    return 0;
}
