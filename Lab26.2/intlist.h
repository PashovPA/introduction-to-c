#ifndef INTLIST_H_INCLUDED
#define INTLIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct
{
    struct node* current;
} loop_list;

int loop_is_empty (const loop_list *l);

int loop_next (loop_list *l);

int loop_prev (loop_list *l);

int loop_insert_next (loop_list *l, int e);

int loop_insert_prev (loop_list *l, int e);

int loop_delete_cur (loop_list *l);

int loop_delete_next (loop_list *l);

int loop_delete_prev (loop_list *l);

int *loop_get (loop_list *l);

void loop_print (loop_list *l);

void loop_copy (loop_list *l, loop_list *r);

#endif // INTLIST_H_INCLUDED
