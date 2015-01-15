/****************************
 * PROGRAM NAME:     div.c  *
 * PAGE NUMBER:        691  *
 * AUTHOR:         SWAROOP  *
 ****************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    div_t ans;

    ans = div(15,4);
    printf("Quotient: %d Remainder: %d\n", ans.quot, ans.rem);

    return 0;
}
