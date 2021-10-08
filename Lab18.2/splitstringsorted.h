#ifndef SPLITSTRINGSORTED_H_INCLUDED
#define SPLITSTRINGSORTED_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * ������� ����������� ������ � ������ ���� ��� ������������
 * ������� ��������� - �������� ������, ����� ��� ����������� ������, ��������� �� ������ ���������� ������, ������ ������������
 * ������� ���������� ���������� ����
 */

size_t splitstring(const char* str, char *buf, char** words, const char* delmtrs);

/**
 * ������� ����������� ������ � ������ ���� ��� ������������
 * ������� ��������� - �������� ������, ����� ��� ����������� ������, ��������� �� ������ ���������� ������, ������ ������������, ������ ������� ������� �����
 * ������� ���������� ���������� ��������� ����
 */

size_t splitstringsorted(const char* str, char *buf, char** words, const char* delmtrs, int *arr);

#endif // SPLITSTRINGSORTED_H_INCLUDED
