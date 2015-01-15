/********************
* NAME:     tax.c   *
* PAGE NUM:    34   *
* PROGRAM NUM:  7   *
* AUTHOR: SWAROOP   *
*********************/

#include <stdio.h>

int main(void)
{
    int amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    if (amount >= 20)
    {
        printf("$20 bills: %d\n", amount/20);
        amount = amount%20;
    }
    if (amount >= 10)
    {
        printf("$10 bills: %d\n", amount/10);
        amount = amount%10;
    }
    if (amount >= 5)
    {
        printf("$5 bills:  %d\n", amount/5);
        amount = amount%5;
    }
	if (amount >= 1)	// needed because it shows `$1 bills: 0` when amount given is 100 (divisible by 20)
	    printf("$1 bills:  %d\n", amount);

    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}

