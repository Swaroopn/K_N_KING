/********************
* NAME:     loan2.c  *
* PAGE NUM:    34   *
* AUTHOR: SWAROOP   *
*********************/

#include <stdio.h>
#include <stdlib.h>

float loan, payment, interest;
int i;

int main(void)
{
    float loan, bal1, bal2, bal3, payment, interest, int1, int2, int3;
    int num, i;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter the number of payments: ");
    scanf("%d", &num);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    for (i=0; (i<num) && (loan > 0); i++)
    {
        loan = (loan-payment) + (interest/1200 * loan);
        printf("Balance remaining after %d payment: %.2f\n", i+1, loan);


    }
    return 0;
}
