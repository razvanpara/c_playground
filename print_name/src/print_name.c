#include <stdio.h>
#include "./something.h"

int main(void)
{
    char name[256];
    char a = 'a';
    int ai = (int)a;
    int x = 1 <= 5;
    printf("Enter your name:");
    scanf("%s", name);
    printf("Hello %s!", name);
    printThis("SUCK MY BALLS\n");
    return 0;
}