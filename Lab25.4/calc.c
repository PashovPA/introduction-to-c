#include "calc.h"

int stack_init (stack *s)
{
    s -> head = NULL;
    return 0;
}

int stack_is_empty (const stack *s)
{
    return !s -> head;
}

int stack_push (stack *s, double x)
{
    struct node *n = malloc (sizeof(struct node));
    if (!n) return -1;
    n -> next = s -> head;
    n -> n = x;
    s -> head = n;
    return 0;
}

int stack_pop (stack *s, double *x)
{
    struct node *t = s -> head;
    if (!t) return -1;
    if (x) *x = t -> n;
    s -> head = s -> head -> next;
    free (t);
    return 0;
}

int stack_free (stack *s)
{
    while (!stack_pop(s, NULL));
    return 0;
}
