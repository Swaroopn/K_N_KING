/**********************************
 * PROGRAM NAME:    palindrome.c  *
 * PAGE NUMBER:              275  *
 * AUTHOR:               SWAROOP  *
 **********************************/

#include <stdio.h>

#define SIZE 50
int main(void)
{
    char message[SIZE], *p;
    int c, i = 0;
    p = &message[0];

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
    {
        *p = tolower(c);
        p++;
    }
    *p = '\0';
    p--;

    for (i = 0; message[i] != '\0'; i++)
    {
        if (message[i] == ' ' || *p == ' ')
            continue;
        if  (message[i] != *p)
        {
            printf("Not a Palindrome\n");
            return 0;
        }
        p--;
    }
    printf("Palindrome\n");

    return 0;
}
