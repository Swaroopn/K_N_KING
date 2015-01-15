#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char num1[20], num2[20];

    printf("Enter first: ");
    gets(num1);
    printf("Enter second: ");
    gets(num2);

    printf("The sum is: %d", atoi(num1) + atoi(num2));

    return 0;
}
