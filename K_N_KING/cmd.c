/***************************
 * PROGRAM NAME:    cmd.c  *
 * PAGE NUMBER:       579  *
 * AUTHOR:        SWAROOP  *
 ***************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr, "INVALID NUMBER OF ARGUMENTS\n");
        exit(EXIT_FAILURE);
    }

	while (--argc > 0)
		printf((argc > 1) ? "%s " : "%s", *++argv);
	printf("\n");
	
	return 0;
}
