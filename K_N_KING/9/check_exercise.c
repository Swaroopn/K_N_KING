/****************************
 * NAME:        exercise.c  *
 * PAGE NUM:           214  *
 * AUTHOR:         SWAROOP  *
 ****************************/

#include <stdio.h>

int check (int x, int y, int n)
{
    if ((x < (n-1)) && (y < n-1))
        return 1;
    else
        return 0;
}

int main(void)
{
    int x, y, n;

    printf("Enter the value of x, y and n: ");
    scanf("%d %d %d", &x, &y, &n);

    if (check (x, y, n-1))
        printf("%d and %d falls between 0 and %d\n", x, y, n-1);
    else
        printf("%d and %d does not falls between 0 and %d\n", x, y, n-1);


    return 0;
}
