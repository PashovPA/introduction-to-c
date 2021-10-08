#include "string.h"

int min(int a, int b)
{
    return a < b ? a : b;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

char* substring(const char *str, char* substr, int stpos, int sub_length)
{
    int length = 0;
    while (*(str + length) != '\0') ++length;

    if (stpos < 0) stpos = max(stpos + length, 0);
    if ((stpos >= length && stpos + sub_length >= length) || (stpos == 0 && sub_length <= 0))
    {
        substr = "";
        return substr;
    }

    int endpos = min(length, max(stpos, min(stpos + sub_length, length)));
    stpos = max(0, min(stpos + sub_length, stpos));
    if (stpos < 0 || endpos < 0)
    {
        substr = "";
        return substr;
    }
    sub_length = endpos - stpos;

    memcpy(substr, str + stpos, sub_length + 1);
    substr[sub_length] = '\0';
    return substr;
}
