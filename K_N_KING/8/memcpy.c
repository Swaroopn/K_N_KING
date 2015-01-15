/****************************
 * PROGRAM NAME:  memcpy.c  *
 * PAGE NUMBER:        158  *
 * AUTHOR:         SWAROOP  *
 ****************************/

#include <stdio.h>
#include <string.h> // for memcpy()

int main(void)
{
    int a[10], b[10], n, i;

    printf("enter no of ele: ");
    scanf("%d", &n);

    printf("Enter ele of a: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    memcpy(b, a, sizeof(b));

    printf("Contents :\na\tb\n\n");
    for (i=0; i<n; i++)
        printf("%d\t%d\n", a[i], b[i]);

    return 0;
}
