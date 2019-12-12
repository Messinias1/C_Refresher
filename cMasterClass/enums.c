#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("%i\n%i\n%i\n", xerox, google, ebay);

    return 0;
}