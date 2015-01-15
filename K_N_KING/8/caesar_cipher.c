/************************************
 * PROGRAM NAME:   caesar_cipher.c  *
 * PAGE NUMBER:    		       180  *
 * AUTHOR:         		   SWAROOP  *
 ************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char message[100];
    char c;
    int i = 0, shift_amount, j = 0;

    printf("Enter message: ");
    while ((c = getchar()) != '\n')
    {
        message[i] = c;
        i++;
    }

    printf("Enter shift amount (1 - 25): ");
    scanf("%d", &shift_amount);

    while (j < i)
    {
        if(!(isalpha(message[j])))
        {
            j++;
            continue;
        }

         if(message[j] == 'z' || message[j] == 'x' || message[j] == 'y')
        {
            message[j] = ((message[j] - 'a') + shift_amount) % 26 + 'a';

            j++;
            continue;
        }

        if(message[j] == 'Z' || message[j] == 'X' || message[j] == 'Y')
        {
            message[j] = ((message[j] - 'A') + shift_amount) % 26 + 'A';

            j++;
            continue;
        }

        if(message[j] >= 65 && message[j] < 91)
        {
          message[j] = ((message[j] - 'A') + shift_amount)  % 26 + 'A';

          j++;
        }

        else
        {
         message[j] = ((message[j] - 'a') + shift_amount)  % 26 + 'a';

          j++;
        }
    }

    message[j] = '\0';

    puts(message);


}
