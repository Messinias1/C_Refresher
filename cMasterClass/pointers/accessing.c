#include <stdio.h>
#include <stddef.h>

int main()
{
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("count = %i, x = %i\n", count, x);

    // print address
    printf("counts address = %p\n", &count);

    // display number of bytes a pointer is using
    printf("counts size in bytes = %d\n", (int)sizeof(&count));

    return 0;
}