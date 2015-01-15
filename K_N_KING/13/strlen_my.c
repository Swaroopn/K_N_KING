#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20] = "swaroop", *p = name;

    while (*p++)
        ;
    printf("%d", p-name-1);

    return 0;
}
