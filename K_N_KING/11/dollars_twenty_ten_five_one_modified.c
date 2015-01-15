/*************************
 * NAME:     	tax2.c   *
 * PAGE NUM:       256   *
 * PROGRAM NUM:      7   *
 * AUTHOR: 	   SWAROOP   *
 *************************/

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    static int amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    pay_amount(amount, &twenties, &tens, &fives, &ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    if (dollars >= 20)
    {
        *twenties = dollars/20;
        dollars = dollars%20;
    }
    if (dollars >= 10)
    {
        *tens = dollars/10;
        dollars = dollars%10;
    }
    if (dollars >= 5)
    {
        *fives = dollars/5;
        dollars= dollars%5;
    }
    *ones = dollars;

    printf("$20 bills: %d\n", *twenties);
    printf("$10 bills: %d\n", *tens);
    printf("$5 bills:  %d\n", *fives);
    printf("$1 bills:  %d\n", *ones);
}
