#include <stdio.h>
#include <stdlib.h>

int main()
{
    float withoutTax = 0;
    float tax = 1.2;

    printf(": ");
    scanf("%f", &withoutTax);
    printf("With tax: %.2f", withoutTax*tax);

    return 0;
}
