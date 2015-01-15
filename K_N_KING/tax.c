/********************
* NAME:     tax.c   *
* PAGE NUM:    34   *
* AUTHOR: SWAROOP   *
*********************/

#include <stdio.h>

#define TAX 5

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: %.2f\n", (TAX * amount) / 100 + amount);

    return 0;
}

