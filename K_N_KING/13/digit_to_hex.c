/************************************
 * PROGRAM NAME:    digit_to_hex.c  *
 * PAGE NUMBER:                280  *
 * AUTHOR:                 SWAROOP  *
 ************************************/

#include <stdio.h>

char digit_to_hex(int digit);

int main(void)
{
    int num, result;

    printf("Enter a digit: ");
    scanf("%d", &num);

    result = digit_to_hex(num);

    printf("%c\n", result);

    return 0;
}

char digit_to_hex(int digit)
{
    return "0123456789ABCDEF"[digit];
}
