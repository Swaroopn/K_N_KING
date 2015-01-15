/***************************
 * PROGRAM NAME:  bits2.c  *
 * PAGE NUMBER:       525  *
 * AUTHOR:        SWAROOP  *
 ***************************/

#include <stdio.h>
#include <ctype.h>

unsigned short swap_bytes(unsigned short i);

int main()
{
    unsigned short i;

    printf("Enter a hexadecimal number (up to four digits): ");
    scanf("%hx", &i);

    printf("Number with bytes swapped: %hx\n", swap_bytes(i));

    return 0;
}

unsigned short swap_bytes(unsigned short i)
{
    unsigned short high_byte = i << 8;
    unsigned short low_byte = i >> 8;

    return high_byte | low_byte;
}
