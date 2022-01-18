#include <stdio.h>
#include "something.h"

void printThis(char *str)
{
    while (*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
}