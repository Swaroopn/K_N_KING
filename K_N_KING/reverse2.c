/*******************************
 * PROGRAM NAME:    reverse.c  *
 * PAGE NUMBER:           261  *
 * AUTHOR:            SWAROOP  *
 *******************************/

#include <stdio.h>

#define SIZE 10

int main(void)
{
    int a[SIZE], *p;

    printf("Enter numbers: \n");
    for (p = a; p < a+SIZE; p++)
    scanf("%d", p);

    printf("In reverse order: ");
    for (p = a+SIZE-1; p >=a; p--)
        printf("%d ", *p);
    return 0;
}
