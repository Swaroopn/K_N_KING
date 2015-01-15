#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source;
    int ch;

    if (argc != 2)
    {
        fprintf(stderr, "usage: fcopy source dest\n");
        exit(EXIT_FAILURE);
    }

    if ((source = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source)) != EOF)
 	   putc(ch, stdout);

    fclose(source);

    return 0;
}

