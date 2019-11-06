#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input;
    do
    {
        input = get_int("Height: ");
    }

    while (input > 8 || input < 1);

    for (int i = 0; i < input; i++)
    {

        for (int space = input - 1; space > i; space--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
