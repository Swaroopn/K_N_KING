/*************************************
 * PROGRAM NAME:   sum_of_doubles.c  *
 * PAGE NUMBER:                 157  *
 * AUTHOR:                  SWAROOP  *
 *************************************/

#include <stdio.h>

int main(void)
{
    double sum, n;

    printf("Enter doubles: \n");
    scanf("%lf", &n);

    while (n)
    {
        sum += n;
        scanf("%lf", &n);
    }


    printf("%.2f", sum);

    return 0;
}
