/****************************
 * NAME:       anagrams.c   *
 * PAGE NUM:          181   *
 * AUTHOR:        SWAROOP   *
 ****************************/

#include <stdio.h>

int main()
{
    int ch, i = 0, digit_count[26] = {0};

    printf("Enter first word: ");
    while((ch = getchar()) != '\n')
    {
        digit_count[ch-'a']++;
    }
    
    printf("Enter second word: ");
    while((ch = getchar()) != '\n')
    {
        digit_count[ch-'a']--;
    }

    for(i = 0; i < 25; i++)
        if(digit_count[i] != 0)
        {
            printf("Not Anagrams!\n");
            return 0;
        }
    printf("Anagrams!\n");


    return 0;
}

