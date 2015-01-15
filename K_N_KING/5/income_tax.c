/**************************
 * NAME: 	 income_tax.c *
 * PAGE NUM: 		  96  *
 * AUTHOR:  	 SWAROOP  *
 **************************/

 #include <stdio.h>

int main(void)
{
    int amount;
    float tax;

    printf("Enter the amount Income: ");
    scanf("%d", &amount);

    if (amount < 750)
        tax = (0.01) * amount;
    else if (amount < 2250)
        tax = 7.50f + (0.075*amount);
    else if (amount < 3750)
        tax = 37.50f + (.03*amount);
    else if (amount < 5250)
        tax = 82.50f + (0.375*amount);
    else if (amount < 7000)
        tax = 142.50f + (1.425*amount);
    else
        tax = 230.00f + (2.3 * amount);

    printf("Tax due: %.2f", tax);
    
    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
