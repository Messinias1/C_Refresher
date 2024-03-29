#include <stdio.h>
#include <stddef.h>

int main(void)
{
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    printf("number's address: %p\n", &number);
    printf("number's value: %d\n", number);

    pnumber = &number;

    printf("pnumber's address: %p\n", (void *)&pnumber);
    printf("pnumber's size: %d in bytes\n", sizeof(pnumber));
    printf("pnumber's value: %p\n", pnumber);
    printf("value pointed to: %d\n", *pnumber);

    return 0;
}