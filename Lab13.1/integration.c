#include "integration.h"

double middle_rectangle(int k, double l, double r, double(*f)(double,double*),double *p)
{
	double step = (r - l) / k;

	double s[k+1],sum=0;
	int i=1;
	s[0]=l+step/2;
	s[k]=r-step/2;
	for (;i<k+1;++i)
    {
        s[i]=s[i-1]+step;

        sum+=step*((*f)(s[i-1],p));

    }
    sum+=step*((*f)(s[k],p));
    return sum;
}
