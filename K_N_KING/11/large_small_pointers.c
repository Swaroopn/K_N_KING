/*******************************************
 * PROGRAM SIZEAME:  lar_small_pointers.c  *
 * PAGE SIZEUMBER:                    250  *
 * AUTHOR:                     	  SWAROOP  *
 *******************************************/

#include <stdio.h>

#define SIZE 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[SIZE], i, big, small;

    printf("Enter %d numbers: ", SIZE);
    for (i = 0; i < SIZE; i++)
        scanf("%d", &b[i]);

    max_min(b, SIZE, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int i;

    *max = *min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}
