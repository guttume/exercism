#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include "isogram.h"

bool is_isogram(const char phrase[])
{
    if (phrase == NULL)
    {
        return false;
    }

    int i = 0;

    while (phrase[i] != '\0')
    {
        int j = i + 1;
        if (isalpha(phrase[i]))
        {
            while (phrase[j] != '\0')
            {
                if (tolower(phrase[i]) == tolower(phrase[j]))
                {
                    return false;
                }
                j++;
            }
        }

        i++;
    }

    return true;
}