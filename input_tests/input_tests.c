#include <stdio.h>
#define NEWLINE '\n'
int main()
{
    char s1[100];
    printf("Enter text:");
    scanf("%s", s1);
    char c = getc(stdin);
    while(c != EOF && c != NEWLINE)
    {
        scanf("%s", s1);
        printf("%s ", s1);
        c = getc(stdin);
    }
    printf("HERE");
    if(0){
        printf("asdasdasd ");
    }
    return 0;
}