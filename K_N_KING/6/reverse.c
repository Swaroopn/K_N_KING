/**************************
 * NAME:       reverse.c  *
 * PAGE NUM:          50  *
 * AUTHOR:       SWAROOP  *
 **************************/

#include <stdio.h>

int main(void)
{
    int n, m;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Reverse is: ");
    do
    {
        m = n % 10;
        n = n / 10;
        printf("%d", m);
    } while (n != 0);
	printf("\n");
	
    return 0;
}
