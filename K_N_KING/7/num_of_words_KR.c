#include <stdio.h>

#define IN 1
#define OUT 0

int main(main)
{
    int c, words, chars, state;

    state = OUT;
    words = chars = 0;

    while ((c = getchar()) != '\n')
    {
        chars++;
        if (c == ' ' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++words;
        }
    }

    printf("%d %d\n", words, chars);

    return 0;
}
