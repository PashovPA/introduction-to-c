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

int stack_init (stack *s); //������������� �����
int stack_is_empty (const stack *s); //���������, �������� �� ���� s ������
int stack_push (stack *s, double x); //�������� ������� x � ������� ����� s
int stack_pop (stack *s, double *x); //������� ������ �� ������� ����� s � ����������� ��� �������� � x
int stack_free (stack *s); //����������� �����

#endif // CALC_H_INCLUDED
