#include "intlist.h"

int loop_is_empty (const loop_list *l)
{
    return l -> current == NULL;
}

int loop_next (loop_list *l)
{
    if (!loop_is_empty(l))
    {
        l -> current = l -> current -> next;
        return 0;
    }
    else
        return 1;
}

int loop_prev (loop_list *l)
{
    if (!loop_is_empty(l))
    {
        l -> current = l -> current -> prev;
        return 0;
    }
    else
        return 1;
}

int loop_insert_next (loop_list *l, int e)
{
    struct node *new = malloc (sizeof (struct node));
    if (!new) return -1;
    new -> data = e;
    if (loop_is_empty(l))
    {
        l -> current = new;
        l -> current -> next = new;
        l -> current -> prev = new;
    }
    else
    {
        new -> next = l -> current -> next;
        l -> current -> next = new;
        new -> prev = l -> current;
        new -> next -> prev = new;
    }
    return 0;
}

int loop_insert_prev (loop_list *l, int e)
{
    struct node *new = malloc (sizeof (struct node));
    if (!new) return -1;
    new -> data = e;
    if (loop_is_empty(l))
    {
        l -> current = new;
        l -> current -> prev = new;
        l -> current -> next = new;
    }
    else
    {
        new -> next = l -> current;
        new -> prev = l -> current -> prev;
        l -> current -> prev ->next = new;
        l -> current -> prev = new;
    }
    return 0;
}

int loop_delete_cur (loop_list *l)
{
    if (loop_is_empty(l -> current)) return -1;
    if (l -> current == l -> current -> next)
    {
        free (l -> current);
        l -> current = NULL;
    }
    else
    {
        loop_next(l);
        struct node *t = l -> current -> prev;
        l -> current -> prev = t -> prev;
        t -> prev -> next = l -> current;
        free(t);
    }
    return 0;
}

int loop_delete_next (loop_list *l)
{
    if (loop_is_empty(l->current)) return -1;
    if (l->current == l->current->next)
    {
        free (l->current);
        l->current = NULL;
    }
    else
    {
        struct node *t = l->current->next;
        l->current->next = t->next;
        t->next->prev = l->current;
        free(t);
    }
    return 0;
}

int loop_delete_prev (loop_list *l)
{
    if (loop_is_empty(l->current)) return -1;
    if (l->current == l->current->next)
    {
        free (l->current);
        l->current = NULL;
    }
    else
    {
        struct node *t = l->current->prev;
        l->current->prev = t->prev;
        t->prev->next = l->current;
        free(t);
    }
    return 0;
}

int *loop_get (loop_list *l)
{
    return loop_is_empty(l) ? NULL : &(l->current->data);
}

void loop_print (loop_list *l)
{
    int *b = loop_get(l), *t = b;
    if (b)
    {
        do
        {
            printf("%d ", *t);
            loop_next(l);
            t = loop_get(l);
        }
        while (t != b);
        printf("\n");
    }
    else printf("NULL\n");
}

void loop_copy (loop_list *l, loop_list *r)
{
    r->current = NULL;
    int *b = loop_get(l), *t = b;
    if (b)
    {
        do
        {
            loop_insert_next(r, *t);
            loop_next(r);
            loop_next(l);
            t = loop_get(l);
        }
        while (t != b);
        loop_next(r);
    }
}
