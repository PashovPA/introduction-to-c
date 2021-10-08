#include "proto.h"

double poly_deg_2 (double x, double *p)
{
    return p[0]*x*x+p[1]*x+p[2];
}

double logrfm (double x, double *p)
{
    return p[0]*log(abs(p[1]*x))+p[2];
}
