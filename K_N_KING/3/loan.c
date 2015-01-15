/********************
* NAME:     loan.c  *
* PAGE NUM:    34   *
* AUTHOR: SWAROOP   *
*********************/

#include <stdio.h>

float loan, payment, interest;
int i;

int main(void)
{
    float loan, bal1, bal2, bal3, payment, interest, int1, int2, int3;
    int i;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    bal1 = (loan-payment) + (interest/1200 * loan);
    printf("Balance remaining after first payment: %.2f\n", bal1);

    bal2 = (bal1-payment) + (interest/1200 * bal1);
    printf("Balance remaining after second payment: %.2f\n", bal2);

    bal3 = (bal2-payment) + (interest/1200 * bal2);
    printf("Balance remaining after third payment: %.2f\n", bal3);
	
	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}

