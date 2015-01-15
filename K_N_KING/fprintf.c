#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    if ((fp = fopen("fprintf.txt", "w+")) == NULL)
    {
        fprintf(stderr, "Cannot open file!");
        exit(EXIT_FAILURE);
    }

    printf("%d", fprintf(fp, "OPENED fprintf"));
    fclose(fp);

    return 0;
}
