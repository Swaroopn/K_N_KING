#include <stdio.h>

int main(void)
{
    int i;

    #ifndef MAX
    	#define MAX 10
    #endif

    for (i = 0; i < MAX; i++)
        printf("%d ", i);
    printf("\n");
    return 0;
}
