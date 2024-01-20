#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rndm.h"
//Christopher McGarrity github link: https://github.com/CBerg333/3207-Lab-Introduction_S24

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

