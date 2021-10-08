#include "delspace.h"

int* maxint(const char *a, int *maximum)
{
    int max = -1000000000;
    int f = 0;
    int lenght;
    const char *b = a;
    while( *b != '\0') ++b;
    lenght = (b - a) + 1;
    char *c = malloc(lenght);
    strcpy(c, a);
    b = strtok(c," \n");
    while ( b != NULL )
    {
        if (atoi(b) > max)
        {
            max = atoi(b);
            f = 1;
        }
        b = strtok(NULL, " \n");
    }
    if (f == 0) return NULL;
        else *maximum = max;
    return maximum;
}
