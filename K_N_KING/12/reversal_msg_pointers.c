/*********************************
 * PROGRAM NAME: reversal_msg.c  *
 * PAGE NUMBER:              275 *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>

#define MSG_LEN 80

int main(void)
{
    int msg[MSG_LEN], *p;

    printf("Enter a message: ");
    for (p = msg; p < msg + MSG_LEN; p++)	// p < &msg[MSG_LEN]
    {
        *p = getchar();
        if (*p == '\n')
            break;
    }

    printf("Reversal is: ");
    for (p--; p >= msg; p--)
        putchar(*p);
    putchar('\n');

    return 0;
}
