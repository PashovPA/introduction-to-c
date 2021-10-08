#ifndef SPLITSTRING_H
#define SPLITSTRING_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * ������� ����������� ������ � ������ ���� ��� ������������
 * ������� ��������� - �������� ������, ����� ��� ����������� ������, ��������� �� ������ ���������� ������, ������ ������������
 * ������� ���������� ���������� ����
 */

size_t splitstring(const char* str, char *buf, char** words, const char* delmtrs);

#endif // SPLITSTRING_H
