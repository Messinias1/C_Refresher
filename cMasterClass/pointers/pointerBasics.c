#include <stdio.h>
#include <stddef.h>

int main(void)
{
    int age = 25;
    int *p_age = NULL;

    p_age = &age;
    printf("Address of age is: %p\n", &age);
    printf("p_age address = %p\n", &p_age);
    printf("p_age value = %p\n", p_age);
    printf("Value of what p_age is pointing to = %d\n", *p_age);

    return 0;
}