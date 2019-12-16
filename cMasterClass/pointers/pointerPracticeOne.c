#include <stdio.h>
#include <stddef.h>

int main(void)
{
    int num = 5;
    int num2 = 10;
    int *pnum = NULL;

    pnum = &num;
    printf("%p\n", pnum);
    printf("%d\n", *pnum);

    pnum = &num2;
    printf("%p\n", pnum);
    printf("%d\n", *pnum);
    return 0;
}