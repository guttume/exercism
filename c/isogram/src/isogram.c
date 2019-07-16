#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include "isogram.h"

bool is_isogram(const char phrase[])
{
    bool occurs[26] = {false};

    if (phrase == NULL)
    {
        return false;
    }

    for (int i = 0; phrase[i] != '\0'; i++)
    {

        if (isalpha(phrase[i]))
        {
            char lower_value = tolower(phrase[i]);
            
            if (occurs[lower_value - 97] == false)
            {
                occurs[lower_value - 97] = true;
            }
            else
            {
                return false;
            }
        }
    }

    return true;
}
