#include <stdio.h>

int main()
{
    int hoursWorked;
    printf("Enter amount of hours you worked: ");
    scanf("%d", &hoursWorked);

    double payRate = 12.00;
    double overtime = 18.00;
    double tax = 0.0;
    double grossPay = 0.0;
    double netPay;

    if (hoursWorked <= 40)
    {
        grossPay = payRate * hoursWorked;
    }
    else if (hoursWorked > 40)
    {
        grossPay = (payRate * 40) + ((hoursWorked - 40) * overtime);
    }
    printf("Gross pay is: %.2f\n", grossPay);

    if (grossPay <= 300)
    {
        tax = grossPay * .15;
        netPay = grossPay - tax;
    }
    else if (grossPay > 300 && grossPay <= 450)
    {
        tax = (300 * .15) + (150 * .2);
        netPay = grossPay - tax;
    }
    else
    {
        tax = (300 * .15) + (150 * .2) + (grossPay - 450) * .25;
        netPay = grossPay - tax;
    }
    printf("Tax is: %.2f\n", tax);
    printf("Net pay is: %.2f\n", netPay);

    return 0;
}