/*************************
 * NAME:     fraction.c  *
 * PAGE NUM:         34  *
 * AUTHOR:      SWAROOP  *
 *************************/

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction and second fraction: ");
    scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);


    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
