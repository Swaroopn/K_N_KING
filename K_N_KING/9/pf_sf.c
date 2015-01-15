/**********************************
 * PROGRAM NAME:  printf_scanf.c  *
 * PAGE NUMBER:              189  *
 * AUTHOR:               SWAROOP  *
 **********************************/

#include <stdio.h>

int main(void)
{
    int a, b, c;

    a = printf("hello, swaroop\n"); // printf returns the number of characters that it prints including space, \n, ',',...(in this case 15)
    printf("%d\n", a);    // 15

    b = scanf("%d%d", &a, &c); // scanf returns num of chars or digits scanned excluding space
    printf("%d", b);    // 2

    return 0;
}
