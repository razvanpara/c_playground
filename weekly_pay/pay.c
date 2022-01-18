#include <stdio.h>
#define daca if
#define sau else if
#define altceva else
#define afiseaza printf

int main()
{
    int a = 5;
    int b = 5;
    daca(a > b)
    {
        afiseaza("a mai mare ca b");
    }
    sau(a < b)
    {
        afiseaza("a mai mic ca b");
    }
    altceva
    {
        afiseaza("a si b sunt egale");
    }
    afiseaza("\n");
    int hoursWorked = 45;
    double payRateBase = 12.00;
    double overtimeMultiplier = 1.5;
    int overtime = hoursWorked > 40 ? hoursWorked - 40 : 0;
    double weeklyPayGross = (hoursWorked - overtime) * payRateBase + overtime * payRateBase * overtimeMultiplier;
    double weeklyPay = weeklyPayGross;
    double tax;
    if (weeklyPay <= 300)
    {
        tax += (weeklyPay * 0.15);
    }

    else if (weeklyPay > 300 && weeklyPay <= 450)
    {
        tax += (300 * 0.15 + (weeklyPay - 300) * 0.20);
    }
    else
    {
        tax += (weeklyPay - 450) * 0.25 + 300 * 0.15 + 150 * 0.20;
    }

    weeklyPay = weeklyPayGross - tax;

    printf("weekPay - G: %.2lf \nweekPay - N: %.2lf\nTaxes: %.2lf", weeklyPayGross, weeklyPay, tax);

    return 0;
}