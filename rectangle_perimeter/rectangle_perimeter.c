#include <stdio.h>
#include <stdlib.h>

char *concat(char *s1, char *s2)
{
    char *cS1 = s1;
    char *cS2 = s2;
    while (*cS1 != '\0')
        cS1++;
    while (*cS2 != '\0')
        cS2++;
    int s1Length = cS1 - s1;
    int s2Length = cS2 - s2;
    char *newStrStart = malloc(sizeof(char) * (s1Length + s2Length));
    char *newStr = newStrStart;
    while (*s1 != '\0')
    {
        *newStr = *s1;
        newStr++;
        s1++;
    }
    while (*s2 != '\0')
    {
        *newStr = *s2;
        newStr++;
        s2++;
    }
    return newStrStart;
}
int *sum(int a, int b)
{
    int *sum = malloc(sizeof(int));
    *sum = a + b;
    return sum;
}
int main(int argc, char *argv[])
{
    double width, height, perimeter, area;

    sscanf(argv[1], "%lf", &width);
    sscanf(argv[2], "%lf", &height);
    // or
    width = atoi(argv[1]);
    height = atoi(argv[2]);
    
    perimeter = width * height * 2;
    area = width * height;
    printf("Rectangle dimensions are:\n");
    printf("width - %.3lf;\nheight - %.3lf;\n", width, height);
    printf("perimeter - %.3lf;\narea: - %.3lf;\n", perimeter, area);
    return 0;
}