#include "splitstring.h"

size_t splitstring(const char *str, char *buf, char** words, const char* delmtrs)
{
    size_t length = 0;
    while(*(str + length) != '\0') ++length;

    memcpy(buf, str, length + 1);
    char *word = strtok(buf, delmtrs);
    size_t i = 0;
    while (word != NULL)
    {
        words[i++] = word;
        word = strtok(NULL, delmtrs);
    }
    words[i] = NULL;

    return i;
}
