#include <stdio.h>

int main()
{
    char chars[] = "abc";
    char* charsPtr = chars;
    char c = 'x';
    long x = 0;
    size_t a = sizeof(chars);
    size_t aa = sizeof(*charsPtr);
    size_t b = sizeof(c);
    size_t d = sizeof(x);
    return 0;
}
