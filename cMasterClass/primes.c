#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primes[100] = {2, 3};

    int i, p = 0;
    for (i = 5; i < 100; ++i)
    {
        if (i < 13 && i % 2 != 0)
        {
            p++;
            primes[1 + p] = i;
            // printf("%d ", i);
        }
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 9 != 0 && i % 11 != 0)
        {
            p++;
            primes[1 + p] = i;
            // printf("%d ", i);
        }
    }
    // printf("I am P: %d", p);
    for (i = 0; i < p + 2; ++i)
    {
        printf("%d ", primes[i]);
    }
    printf("\n");
    return 0;
}