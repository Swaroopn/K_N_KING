/*********************************
 * PROGRAM NAME:  lar+sec_lar.c  *
 * PAGE NUMBER:              250 *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i, temp;

    *second_largest =  a[0];
    *largest = a[1];

    if (*largest < *second_largest)
    {
        temp = *second_largest;
        *second_largest =  *largest ;
        *largest  = temp;
    }

    for(i = 2;i < n;i++)
    {
        if (a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        if (a[i] > *second_largest && a[i] < *largest)
            *second_largest= a[i];
    }

    printf("largest %d\n", *largest);
    printf("Sec %d", *second_largest);
}

int main(void)
{
    int a[10], n, x=0, y=0, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter ele\n");
    for (i=0;i<n;i++)
        scanf("%d", &a[i]);

    find_two_largest(a, n, &x, &y);

    return 0;
}
