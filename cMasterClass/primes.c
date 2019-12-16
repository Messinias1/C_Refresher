// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int primes[100] = {2, 3};

//     int i, p = 0;
//     for (i = 5; i < 100; ++i)
//     {
//         if (i < 13 && i % 2 != 0)
//         {
//             p++;
//             primes[1 + p] = i;
//             // printf("%d ", i);
//         }
//         if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 9 != 0 && i % 11 != 0)
//         {
//             p++;
//             primes[1 + p] = i;
//             // printf("%d ", i);
//         }
//     }
//     // printf("I am P: %d", p);
//     for (i = 0; i < p + 2; ++i)
//     {
//         printf("%d ", primes[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int primes[100] = {2, 3};

//     int i, p = 0;
//     for(i = 5; i < 100; ++i)
//     {
//         if(i < 13 && i % 2 != 0 )
//         {
//             p++;
//             primes[1 + p] = i;
//             // printf("%d ", i);
//         }
//         if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 9 != 0 && i % 11 != 0)
//         {
//             p++;
//             primes[1 + p] = i;
//             // printf("%d ", i);
//         }
//     }
//     // printf("I am P: %d", p);
//     for(i = 0; i < p + 2; ++i)
//     {
//         printf("%d ", primes[i]);
//     }
//     printf("\n");
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int p;
    int i;

    int primes[50] = {0};
    int primeIndex = 2;

    bool isPrime;

    // hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for ( i = 0;  i < primeIndex;  ++i )
         printf ("%i  ", primes[i]);

    printf("\n");
    return 0;
}