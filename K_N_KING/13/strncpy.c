/**********************************
 * PROGRAM NAME:       strncpy.c  *
 * PAGE NUMBER:              290  *
 * AUTHOR:               SWAROOP  *
 **********************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[8] = "SWAROOP", name2[8];

    printf("%s\n", name);

    strncpy(name2, name, sizeof(name) - 1);
    name2[sizeof(name2)-1] = '\0';

    printf("%s", name2);

    return 0;
}
