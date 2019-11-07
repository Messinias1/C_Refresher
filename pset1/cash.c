#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prompt user for input

int main()
{
    float f;
    do
    {
        f = get_float("Change: ");
    } while (f < 0);

    float cents = round(f * 100);
    int count = 0;
    printf("%.2f\n", cents);

    while (25 <= cents)
    {
        count++;
        cents = cents - 25;
    }
    while (10 <= cents)
    {
        count++;
        cents = cents - 10;
    }
    while (5 <= cents)
    {
        count++;
        cents = cents - 5;
    }
    while (1 <= cents)
    {
        count++;
        cents = cents - 1;
    }
    printf("you have %i coins returned\n", count);
}
