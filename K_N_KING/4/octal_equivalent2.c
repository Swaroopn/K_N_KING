/**************************
 * NAME:         octal2.c *
 * PAGE NUM:        Q & A *
 * AUTHOR:        SWAROOP *
 **************************/

#include <stdio.h>

int main(void)
{
    int i, j, k=0, l;
    int octal[6];

    /*printf("Enter a number between 0 and 32767. I will print its octal equivalent: \n");
    scanf("%d", &i);
    printf("OCTAL equivalent: %.5o", i);*/

    printf("Enter a num: ");
    scanf("%d", &i);
    while (i != 0)
    {
        j = i % 8;
        i = i/8;
        octal[k++] = j;
    }
    octal[k] = 0;
    printf("octal equivalent: ");
    for (l = k; l >=0; l--)
    {
        printf("%d", octal[l]);
    }
    
    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
