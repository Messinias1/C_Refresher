#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare Variables
    double minutes;
    double minsInYear = 525600;
    double minsInDay = 1440;

        // user input and scan input
    printf("Enter number representing minutes: ");
    scanf("%lf", &minutes);

    // variables for conversion
    double resultForDays = minutes / minsInDay;
    double resultForYear = minutes / minsInYear;

    // print final conversion
    printf("Minutes in day %f\n Minutes in Year %f\n", resultForDays, resultForYear);

    return 0;
}