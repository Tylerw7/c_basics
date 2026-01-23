#include <stdio.h>

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum company firstCompany = XEROX;
    enum company secondCompany = GOOGLE;
    enum company thirdCompany = EBAY;

    printf("%d\n", firstCompany);
    printf("%d\n", secondCompany);
    printf("%d\n", thirdCompany);

    return 0;
}