#include "main.h"

/**
 *positive_or_negative - Main function
 *@i: Char to be checked
 *printf: prints positive,negative and zero
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
