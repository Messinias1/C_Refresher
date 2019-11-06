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

    float cents = round(f * 100) / 100;
    int count = 0;
    printf("%f", cents);

    while (cents < 25)
    {
        count++;
        cents = cents - 25;
        break;
    }
    while (cents < 10)
    {
        count++;
        cents = cents - 10;
        break;
    }
    while (cents < 5)
    {
        count++;
        cents = cents - 5;
        break;
    }
    while (cents < 1)
    {
        count++;
        cents = cents - 1;
        break;
    }
    printf("%i\n", count);
}
