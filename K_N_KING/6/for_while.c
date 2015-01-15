/********************************
 * PROGRAM NAME:  for_while.c   *
 * AUTHOR:            SWAROOP   *
 * PAGE NUMBER:           113   *
 ********************************/

#include <stdio.h>

int main(void)
{
    int n = 0, sum = 0, i;

    /****** DIFFERENCE BETWEEN WHILE AND FOR LOOP ******/

    /* while loop */
    while (n < 10)
    {
        scanf("%d", &i);
        if (i == 0)
            continue;
        sum += i;
        n++; // while increments n only when i not equal to zero
    }
    printf("%d\n", sum);

    /* for loop */
    sum = 0;
    for (n = 0; n < 10; n++)
    {
        scanf("%d", &i);
        if (i == 0)
            continue;
        sum += i;
    } // while increments n irrespective of the value of i, that is, eventhough i = 0

    printf("%d\n", sum);
    return 0;
}
