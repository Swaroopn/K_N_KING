/****************************
 * NAME:       anagrams.c   *
 * PAGE NUM:          180   *
 * AUTHOR:        SWAROOP   *
 ****************************/
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20], str2[20];

    printf("Enter a first and last name: ");
    scanf("%s %s", &str1, &str2);


    printf("You Entered the name: %s, %c.\n", str2, str1[0]);

    return 0;
}

