#include <stdio.h>
#include <time.h>

#define bool _Bool
#define TrueZ 1
#define False 0

enum primaryColor
{
    red = 1,
    green = 2,
    blue = 3
};

int main(int argsCount, char *args[])
{
    long x;
    signed long y;
    unsigned long z;
    signed long int w;
    unsigned char str[250];
    enum primaryColor c = blue;

    int ii = 15;
    printf("%x\n",ii);

    srand(time(NULL));
    int ir = rand();
    char input[256000];
    int xx = 2e2;
    bool boolean = TrueZ;
    if (boolean)
        printf("SUCK MY BALLS\n");
    printf("%d\n", c);
    printf("Enter text:\n");
    scanf("%s", input);
    printf("Got text %s", input);
    for (int i = 0; i < argsCount; i++)
    {
        printf("output: ");
        printf("%s ", args[i]);
    }
    return 0;
}