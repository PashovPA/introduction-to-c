#include "calc.h"

 int main()
 {
     double d1, d2;
     int q = 1;
     stack calc;
     stack_init(&calc);
     while (q != 0)
        {
            double x;
            int c = getchar();
            switch (c)
               {
                   case '\n':
                   case ' ' : break;
                   case '=' : stack_pop(&calc, &d1); printf("%lf\n", d1); q = 0; break;
                   case '+' : if (stack_pop(&calc, &d1) + stack_pop(&calc, &d2) == 0)
                                 {
                                     stack_push(&calc, d1+d2); break;
                                 }
                              else return -1;
                   case '-' : if (stack_pop(&calc, &d1) + stack_pop(&calc, &d2) == 0)
                                 {
                                     stack_push(&calc, d2-d1); break;
                                 }
                              else return -1;
                   case '*' : if (stack_pop(&calc, &d1) + stack_pop(&calc, &d2) == 0)
                                 {
                                     stack_push(&calc, d2*d1); break;
                                 }
                              else return -1;
                   case '/' : if (stack_pop(&calc, &d1) + stack_pop(&calc, &d2) == 0)
                                 {
                                     stack_push(&calc, d2/d1); break;
                                 }
                              else return -1;
                   case '^' : if (stack_pop(&calc, &d1) + stack_pop(&calc, &d2) == 0)
                                 {
                                     stack_push(&calc, pow(d2, d1)); break;
                                 }
                              else return -1;
                   default: ungetc(c, stdin);
                            if (scanf("%lf", &x) != 1)
                               {
                                   return -1;
                               }
                            else
                               {
                                   stack_push(&calc, x);
                               }
                            break;
                }
        }
    return 0;
}
