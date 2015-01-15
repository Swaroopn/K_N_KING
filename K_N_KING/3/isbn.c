/********************
* NAME:      ISBN.c  *
* PAGE NUM:      50  *
* AUTHOR    SWAROOP  *
**********************/

#include <stdio.h>

int main(void)
{
    int gsi, g_d, publish, item_num, check_digit;

    printf("Enter ISBN (13 digit): ");
    scanf("%d-%d-%d-%d-%d", &gsi, &g_d, &publish, &item_num, &check_digit);
    printf("GSI prefix: %d\n", gsi);
    printf("GSI identifier: %d\n", g_d);
    printf("Publisher code: %d\n", publish);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
