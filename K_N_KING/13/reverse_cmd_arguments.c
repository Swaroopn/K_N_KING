/*************************************
 * PROGRAM NAME:    cmd_arguments.c  *
 * PAGE NUMBER:                 312  *
 * AUTHOR:                  SWAROOP  *
 *************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;

    for (i =  argc - 1; i >= 1; i--)
    {
        printf("%s ", argv[i]);
    }
	printf("\n");
	
    return 0;
}
