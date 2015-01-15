/*********************************
 * PROGRAM NAME:    exercise4.c  *
 * PAGE NUMBER:             310  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}
