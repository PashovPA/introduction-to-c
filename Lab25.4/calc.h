#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct node
    {
        double n;
        struct node *next;
    };

typedef struct stack
    {
        struct node *head;
    } stack;

int stack_init (stack *s); //инициализация стэка
int stack_is_empty (const stack *s); //проверяет, является ли стек s пустой
int stack_push (stack *s, double x); //помещает элемент x в вершину стека s
int stack_pop (stack *s, double *x); //удаляет элемнт из вершины стека s с сохранением его значения в x
int stack_free (stack *s); //уничтожение стека

#endif // CALC_H_INCLUDED
