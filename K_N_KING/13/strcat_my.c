#include <stdio.h>
#include <string.h>

int main(void)
{
    char name1[20] = "swaroop", name2[20] = "nagendra", *p = name1, *q = name2;

    while (*p)
       p++;

    while (*p++ = *q++)
        ;
    printf("%s", name1);

    return 0;
}
