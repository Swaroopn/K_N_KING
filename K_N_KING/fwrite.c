/*************************
 * NAME:       fwrite.c	 *
 * PAGE NUM:        571  *
 * AUTHOR:      SWAROOP  *
 *************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[30] = "Swaroop is a good boy";
	FILE *fp;
	
	if ((fp = fopen("fwrite.txt", "w+")) == NULL)
	{	
		puts("Cannot Open input file!");
		exit(EXIT_FAILURE);
	}
	
	/* 
		array's address
		size of each array element
		num of ele to write
		file pointed by fp in which data should be written
	*/
	fwrite(str, sizeof(str[0]), 10, fp);	// sizeof(str)/sizeof(str[0])
	
	fclose(fp);

	return 0;
}
