/*************************
 * NAME:       frputs.c	 *
 * PAGE NUM:        570  *
 * AUTHOR:      SWAROOP  *
 *************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	
	if ((fp = fopen("fputs.txt", "w+")) == NULL)
	{	
		puts("Cannot Open input file!");
		exit(EXIT_FAILURE);
	}
	
	/* fputs - doesn't write a new line char unless specified */
	fputs("Hi, Swaroop!\n", fp);
	fclose(fp);

	return 0;
}
