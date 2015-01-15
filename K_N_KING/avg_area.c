/***********************************
 * PROGRAM NAME:         AVG_AREA.c  *
 * PAGE NUMBER:               345  *
 * AUTHOR:                SWAROOP  *
 ***********************************/

#include <stdio.h>

#define AVG(x, y)   ((x) + (y)) / 2
#define AREA(x, y)  ((x) * (y))

int main(void)
{
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    printf("%d ", AVG(x, y));
    printf("%d ", AREA(x, y));
    return 0;
}
