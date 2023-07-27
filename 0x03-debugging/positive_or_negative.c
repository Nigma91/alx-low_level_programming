#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive-or_negative - prints if intern i is positive, negative or zero
 *@i - input integer
 *Return: Always 0 (Success)
 */

int positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}

	return (0);
}
