/**********************************
 * PROGRAM NAME:    palindrome.c  *
 * PAGE NUMBER:              275  *
 * AUTHOR:               SWAROOP  *
 **********************************/

#include <stdio.h>
#include <ctype.h>

#define SIZE 50

int main(void)
{
    char message[SIZE], *p;
    int c, i = 0;
    p = message;	// p = &message[0];

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
    {
    	if (ispunct(c) || isspace(c) || isdigit(c))
    		continue;
        *p = tolower(c);
        p++;
    }
    *p = '\0';

    for (i = 0, p--; message[i] != '\0'; i++, p--)
    {
        if  (message[i] != *p)
        {
            printf("Not a Palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");

    return 0;
}
