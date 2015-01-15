/***********************************
 * NAME: 	 income_tax_modified.c *
 * PAGE NUM: 		          217  *
 * AUTHOR:  	          SWAROOP  *
 ***********************************/

 #include <stdio.h>

float amount;
float tax;

float tax_due(float amout);

int main(void)
{
    printf("Enter the amount Income: ");
    scanf("%f", &amount);

    tax = tax_due(amount);

    printf("Tax due: %.2f", tax);

    return 0;
}

float tax_due(float amout)
{
    if (amount < 750)
        return (0.01 * amount);
    else if (amount < 2250)
        return (7.50f + (0.075*amount));
    else if (amount < 3750)
        return (37.50f + (.03*amount));
    else if (amount < 5250)
        return (82.50f + (0.375*amount));
    else if (amount < 7000)
        return (142.50f + (1.425*amount));
    else
        return (230.00f + (2.3 * amount));
}
