/**********************************************
 * PROGRAM NAME:         largest_5_of_1000.c  *
 * PAGE NUMBER:                               *
 * AUTHOR:                           SWAROOP  *
 **********************************************/

#include <stdio.h>

#define SIZE 1000

void quicksort(unsigned long int a[], int low, int high);
int split(unsigned long int a[], int low, int high);

int main(void)
{
    unsigned long a[SIZE];
    int i, temp, j;

    for (i = 0; i < SIZE; i++)
    {
        if (i % 10 == 0)
            printf("\n");
        a[i] = rand() % 1000;
        printf("%d\t", a[i]);
    }
    printf("\n\n");

    quicksort(a, 0, SIZE - 1);

    printf("In sorted order: ");
    for (i = 0; i < SIZE; i++)
    {
        if (i % 10 == 0)
            printf("\n");
        printf("%d\t", a[i]);
    }
    printf("\n\n");


    j = SIZE - 5;
    for (j = SIZE - 1; j >= SIZE - 5; j--)
    {
        printf("%d largest number: %d\n", j,  a[j]);
    }

    return 0;
}

void quicksort(unsigned long int a[], int low, int high)
{
    int middle;

    if (low >= high)
        return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split (unsigned long int a[], int low, int high)
{
    int part_element = a[low];

    for (;;)
    {
        while (low < high && part_element <= a[high])
            high--;
        if (low >= high)
            break;
        a[low++] = a[high];

        while (low < high && a[low] <= part_element)
            low++;
        if (low >= high)
            break;
        a[high--] = a[low];
    }

    a[high] = part_element;

    return high;
}
