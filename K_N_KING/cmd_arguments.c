/***************************
 * PROGRAM NAME:  bits2.c  *
 * PAGE NUMBER:       498  *
 * AUTHOR:        SWAROOP  *
 ***************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int ch;
    FILE *fp;

    if (argc != 4)
    {
        fprintf(stderr, "INVALID NUMBER OF ARGUMENTS\n");
        exit(EXIT_FAILURE);
    }

	/* TO OPEN FIRST FILE */
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open file %s", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    
    /* TO OPEN SECOND FILE */
    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("Can't open file %s", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);

	/* TO OPEN THIRD FILE */
    if ((fp = fopen(argv[3], "r")) == NULL)
    {
        printf("Can't open file %s", argv[3]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    
    return 0;
}

