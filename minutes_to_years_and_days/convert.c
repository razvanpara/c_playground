#include <stdio.h>

int main()
{
    int minutes = 3;
    double _hourMinutes = 60;
    double _dayMinutes = 24 * _hourMinutes;
    double _yearMinutes = 365 * _dayMinutes;

    switch (minutes > 2)
    {
    case 1:
        printf("buhuhuh");
    case -1:
        printf("hihihi");
        break;
    case 0:
        printf("zeroooo");
        break;
    }

    printf("Enter the number of minutes:\n");
    scanf("%i", &minutes);
    double _minToYears = minutes / _yearMinutes;
    double _minToDays = minutes / _dayMinutes;
    printf("%i minutes is:\n- %lf years\n- %lf days\n", minutes, _minToYears, _minToDays);

    printf("size of int is %u\n", sizeof(int));
    printf("size of char is %u\n", sizeof(char));
    printf("size of short is %u\n", sizeof(short));
    printf("size of long is %u\n", sizeof(long));
    printf("size of long long is %u\n", sizeof(long long));
    printf("size of long int is %u\n", sizeof(long int));
    printf("size of long long int is %u\n", sizeof(long long int));
    printf("size of double is %u\n", sizeof(double));
    printf("size of long double is %u\n", sizeof(long double));
    int arr[20];

    printf("sizeof arr %zd", sizeof(arr));
    return 0;
}