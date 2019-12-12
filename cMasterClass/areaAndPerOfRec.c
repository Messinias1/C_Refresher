#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double height = 4;
    double width = 2;
    double perimeter = 2 * (height + width);
    double area = width * height;

    printf("height: %.2f\n", height);
    printf("width: %.2f\n", width);
    printf("perimeter: %.2f\n", perimeter);
    printf("area: %.2f\n", area);
}