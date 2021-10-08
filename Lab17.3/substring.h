#ifndef SUBSTRING_H_INCLUDED
#define SUBSTRING_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ������� �������� ��������� � ����� ��������� �����
 * ������� ��������� - �������� ������, ����� ��������� �����, ������� ������� ������� ���������, ����� ���������
 * �������� ��������� - �������� ������
 * ������� ��������� ��������� �� ������ ������ ��������� � ����� ��������� ������
 */

char* substring(const char *str, char *substr, int stpos, long sub_length);

#endif // SUBSTRING_H_INCLUDED
