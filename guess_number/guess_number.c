#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "./romanian.h"

int addOneToResult(int (*p)(int, int), int a, int b)
{
    return 1 + p(a, b);
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{

    int arrSize = 0;
    printf("enter size:");
    scanf("%i", arrSize);
    double arr[arrSize];
    time_t i = time(NULL);
    srand(i);
    int randomNumber = rand() % 21;
    int userInput;
    int tries = 5;
    cat_timp(tries mai_mare_ca 0)
    {
        printf("you have %i tries left\nenter a number between 0 and 20 (inclussive):\n", tries);
        scanf("%i", &userInput);
        cat_timp(userInput mai_mic_ca 0 SAU userInput mai_mare_ca 20)
        {
            printf("number must be between 0 and 20 (inclussive):\n");
            scanf("%i", &userInput);
        }
        daca(userInput mai_mare_ca randomNumber)
            printf("too high");
        sau_daca(userInput mai_mic_ca randomNumber)
            printf("too low");
        altfel
            iesi_acas;
        printf(", try again!\n");
        tries scade;
    }
    if (tries mai_mare_ca 0)
    {
        printf("congrats, you've guessed the number!\nyour number %i\nCPU number %i\n", userInput, randomNumber);
    }
    else
        printf("you've lost!\nyour number %i\nCPU number %i\n", userInput, randomNumber);
    return 0;
}