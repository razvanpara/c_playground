#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5

enum Month
{
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int add(int, int);

void printWeatherReport(int startingYear, double rainHistory[][12])
{
    double totalRain = 0;
    double years[YEARS];
    double months[MONTHS];

    for (int yearIndex = 0; yearIndex < YEARS; yearIndex++)
    {
        for (int monthIndex = 0; monthIndex < MONTHS; monthIndex++)
        {
            double rainfall = rainHistory[yearIndex][monthIndex];
            years[yearIndex] += rainfall;
            months[monthIndex] += rainfall;
        }
    }
    printf("%s %s", "year", "rainfall(inches)\n");
    for (int i = 0; i < 5; i++)
    {
        totalRain += years[i];
        printf("%i\t%5.1lf\n", startingYear++, years[i]);
    }
    printf("The yearly average is %.1lf inches\n", totalRain / 5);
    printf("\n");
    printf("%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t\n", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec");
    for (int i = 0; i < 12; i++)
        printf("%5.1lf\t", months[i] / 5);
    printf("\n");
}

int main()
{
    printf("%d", add(2, 5));
    double weather[5][12] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
    };
    printWeatherReport(2010, weather);
    printf("hello world\n");
    return 1;
}

int add(int a, int b)
{
    return a + b;
}