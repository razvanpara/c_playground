#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ARRAY_SIZE 1000000

void printPrimesTo100()
{
    int *primes = malloc(ARRAY_SIZE * sizeof(int));
    *primes = 1;
    *(primes + 1) = 1;
    *(primes + 2) = 1;

    for (int i = 2; i < ARRAY_SIZE; i++)
    {
        if (*(primes + i) == 0)
            for (int j = 2; i * j < ARRAY_SIZE; j++)
                *(primes + i * j) = 1;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        int j = *(primes + i);
        if (!*(primes + i))
        {
            printf("%i ", i);
        }
    }
    printf("\n");
}

// void printPrimesTo100_2()
// {

//     int *primes = malloc(ARRAY_SIZE * sizeof(int));
//     *primes = 2;
//     *(primes + 1) = 3;

//     int currentNumber = 4;
//     int index = 2;

//     while (currentNumber < ARRAY_SIZE)
//     {
//         if (currentNumber % 2 != 0)
//         {
//             int i;
//             for (i = 0; i < index; i++)
//             {
//                 if (currentNumber % primes[i] == 0)
//                 {
//                     break;
//                 }
//             }
//             if (i == index)
//             {
//                 primes[index] = currentNumber;
//                 index++;
//             }
//         }
//         currentNumber++;
//     }

//     for (int i = 0; i < ARRAY_SIZE; i++)
//     {
//         if (primes[i])
//         {
//             printf("%i ", primes[i]);
//         }
//     }
// }

int main()
{
    printPrimesTo100();
    // printPrimesTo100_2();
    return 0;
}
