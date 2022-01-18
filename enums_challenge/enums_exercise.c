#include <stdio.h>
#define bool _Bool
#define false 1

enum Company
{
    GOOGLE = 5,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT
};
int main()
{
    enum Company a, b, c, d;
    a = XEROX;
    b = GOOGLE;
    c = EBAY;
    d = 7;
    if (false)
    {
        printf("%lf\n\n", (2 / 3L));
    }
    printf("%i\n", a);
    printf("%i\n", b);
    printf("%i\n", c);
    return 0;
}