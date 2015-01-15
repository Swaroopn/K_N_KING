/**********************************
 * NAME:     fraction_modified.c  *
 * PAGE NUM:                 158  *
 * AUTHOR:               SWAROOP  *
 **********************************/

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num1, result_denom1, result_num2, result_denom2, result_num3, result_denom3, result_num4, result_denom4;

    printf("Enter first fraction and second fraction: ");
    scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);

    printf("Enter first fraction and second fraction: ");
    scanf("%d/%d - %d/%d", &num1, &denom1, &num2, &denom2);

    printf("Enter first fraction and second fraction: ");
    scanf("%d/%d * %d/%d", &num1, &denom1, &num2, &denom2);

    printf("Enter first fraction and second fraction: ");
    scanf("%d/%d / %d/%d", &num1, &denom1, &num2, &denom2);

    result_num1 = num1 * denom2 + num2 * denom1;
    result_denom1 = denom1 * denom2;

    result_num2 = num1 * denom2 - num2 * denom1;
    result_denom2 = denom1 * denom2;

    result_num3 = num1 * num2 ;
    result_denom3 = denom1 * denom2;

    result_num4 = num1 * denom2;
    result_denom4 = denom1 * num2;

    printf("The sum is %d/%d\n", result_num1, result_denom1);
    printf("The sub is %d/%d\n", result_num2, result_denom2);
    printf("The multiplication is %d/%d\n", result_num3, result_denom3);
    printf("The division is %d/%d\n", result_num4, result_denom4);

    return 0;
}
