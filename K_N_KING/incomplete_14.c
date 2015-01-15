/*****************************
 * PROGRAM NAME:    prime.c  *
 * PAGE NUMBER:              *
 * AUTHOR:          SWAROOP  *
 *****************************/

#include <stdio.h>

#define NUM 1000

int main(void)
{
    unsigned long long int num, count = 0;

    printf("Enter a num: ");
    scanf("%d", &num);

    while ((num > 1))
    {
        count++;
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
            num = (3*num) + 1;
    }
    printf("%d ", count+1);

    return 0;
}

/******************
 * ans: 842120280 *
 ******************/





