#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <math.h>

int main(main)
{
    int x = -5;

    errno = 0;  /* set errno to zero before calling fun */
    x = sqrt(x);
    if (errno != 0)
    {
        fprintf(stderr, "Sqrt error!\n");
        exit(EXIT_FAILURE);
    }

	printf("%d", x);

    return 0;
}

