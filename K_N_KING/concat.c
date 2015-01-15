#include<stdio.h>
#include <stdlib.h>

#define SIZE 25

char *concat(const char *str1, const char *str2)
{
    char *result;
    if ((result = malloc(strlen(str1) + strlen(str2) + 1)) == NULL)
    {
        printf("Malloc Failed!\n");
        exit(EXIT_FAILURE);
    }

    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

int main(void)
{
    char *result;
    result = concat("swaroop","nagendra");
    printf("%s", result);
    free(result);
    return 0;
}

