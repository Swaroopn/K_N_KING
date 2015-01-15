/**********************************
 * PROGRAM NAME:       strncat.c  *
 * PAGE NUMBER:              290  *
 * AUTHOR:               SWAROOP  *
 **********************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[8] = "SWAROOP", name2[16] = "NAGENDRA";

    printf("%s\n", name);

    strncat(name2, name, sizeof(name2) - strlen(name2) - 1);
    name2[sizeof(name2)-1] = '\0';

    printf("%s", name2);

    return 0;
}
