/*************************************************
 * PROGRAM NAME:               selection_sort.c  *
 * PAGE NUMBER:                             216  *
 * AUTHOR:                              SWAROOP  *
 *************************************************/

#include <stdio.h>

#define SIZE 15

void selection_sort(int a[], int n);

int main(void)
{
    int n, a[SIZE], i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    selection_sort(a, n);

    return 0;
}

void selection_sort(int a[], int n)
{
    int largest, i, j, temp;

    largest = a[n-1];

    for (j = 0; j < n-1; j++)
    {
        for (i = 0; i < n-j-1; i++)
        {
            if (a[i] > a[n-j-1])
            {
                temp = a[i];
                a[i] = a[n-j-1];
                a[n-j-1] = temp;
            }

        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

}
