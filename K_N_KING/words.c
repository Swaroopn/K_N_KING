#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

int main(int argc, char *argv[])
{
	FILE *fp;
	
	int ch, words = 0;
	
	if (argc != 2)
	{
		fprintf(stderr, "Can't open");
		exit(EXIT_FAILURE);
	}
	
	if ((fp =fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Can't open");
		exit(EXIT_FAILURE);
	}
	
	while ((ch = getchar()) != '\n')
    {
        if (ch == ' ' || ch == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++words;
        }
    }
		
	printf("There are %d words in %s\n", words, argv[1]);
	
	return 0;
}
	
