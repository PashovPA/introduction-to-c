#include "splitstringsorted.h"

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

size_t splitstringsorted(const char *str, char *buf, char** words, const char* delmtrs, int *arr)
{
    size_t length = splitstring(str, buf, words, delmtrs);
    size_t del = 0;

    for (int k = 0; k < length; ++k) arr[k] = 1;

    for (size_t i = 0; i < length - 1; ++i)
        {
            for (size_t j = i + 1; j < length; ++j)
                {
                    if (!strcmp(words[i], words[j]) && *(words[i]) && *(words[j]))
                        {
                            *(words[j]) = '\0';
                            ++del;
                            ++arr[i];
                        }
                }
        }
    for (size_t i = 0; i < length - 1; ++i)
        {
            for (size_t j = i + 1; j < length; ++j)
                {
                    if (strcmp(words[i], words[j]) > 0)
                    {
                        char *c = words[i];
                        words[i] = words[j];
                        words[j] = c;
                        int b = arr[i];
                        arr[i] = arr[j];
                        arr[j] = b;
                    }
                }
        }
    size_t new_length = length - del;
    return new_length;
}
