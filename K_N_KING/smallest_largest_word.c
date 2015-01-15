/*********************************************
 * PROGRAM NAME:    smallest_largest_word.c  *
 * PAGE NUMBER:                         311  *
 * AUTHOR:                          SWAROOP  *
 *********************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char smallest_word[20], largest_word[20], word[20];

    printf("Enter a word: ");
        scanf("%s", word);
    strcpy(smallest_word, strcpy(largest_word, word));

    while (strlen(word) != 4)
    {
        printf("Enter a word: ");
        scanf("%s", word);

        if (strcmp(word, smallest_word) < 0)
            strcpy(smallest_word, word);
        else if (strcmp(word, largest_word) > 0)
            strcpy (largest_word, word);
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);


    return 0;
}
