/********************************
 * NAME:       num_of_digits.c  *
 * PAGE NUM:                89  *
 * AUTHOR:             SWAROOP  *
 ********************************/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >=0 && num <= 9)
        printf("The number %d has 1 digit\n", num);
    else if (num >=10 && num <= 99)
        printf("The number %d has 2 digit\n", num);
    else if (num >=100 && num <= 999)
        printf("The number %d has 3 digit\n", num);
    else if (num >=1000 && num <= 9999)
        printf("The number %d has 4 digit\n", num);
    else if (num >=10000 && num <= 99999)
        printf("The number %d has 5 digit\n", num);
    else
        printf("The number %d has more than 5 digits\n", num);

    return 0;
}
