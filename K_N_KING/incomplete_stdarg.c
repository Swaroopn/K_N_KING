#include <stdio.h>
#include <stdarg.h>

int max_int(int n, ...)
{
    va_list ap; // to access the args that follow n
    int i, current, largest;

    va_start(ap, n);    // indicates variable-legth part of argument list begins
    largest = va_arg(ap, int);  // fetches 2nd arg of max_int and assing it to largest

    for (i = 1; i < n; i++)
    {
        current = var_arg(ap, int); // fetches max_int's remaining arguments, one by one
        if (current > largest)
            largest = current;
    }
    va_end(ap); // to clean up
    return largest;
}

int main(void)
{
    int x, y, z, n;

    printf("Enter number: ");
    scanf("%d", &n);

    scanf("%d %d %d", &x, &y, &z);
    max_int(n, x, y, z);

    return 0;
}
