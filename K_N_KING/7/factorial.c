/*******************************
 * PROGRAM NAME:  factorial.c  *
 * PAGE NUMBER:           159  *
 * AUTHOR:            SWAROOP  *
 *******************************/

#include <stdio.h>

int main(void)
{
    int num, i, num1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    num1 = num;

    for (i = 1;i < num; i++)
    {
        num1 = num1 * (num-i);
    }
    printf("%d\n", num1);

    return 0;
}
