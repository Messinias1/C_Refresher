#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tries = 5;
    int guess;

    time_t t;
    srand((unsigned)time(&t));
    int random = rand() % 20 + 1;

    do
    {
        printf("Enter a number between 1 and 20: ");
        printf("\n");
        scanf("%d", &guess);
        tries--;

        if (tries == 0)
        {
            printf("You ran out of attempts, better luck next time :(\n");
            printf("\n");
            break;
        }
        printf("Wrong guess you still have %d attempts left\n", tries);
        printf("\n");
        if (guess > random)
        {
            printf("My number is less than that\n");
            printf("\n");
        }
        else if (guess < random)
        {
            printf("My number is greater than that\n");
            printf("\n");
        }
    } while (guess != random);

    if (guess == random)
    {
        printf("Congrats you won!!!\n");
        printf("\n");
    }
    return 0;
}