#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - it's the entry point
 * if conditions - comparing the values
 * Return: Always 0
 *
 */
int positive_or_negative(int n)	
{
	if (n < 0)
		printf("%i is negative\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is positive\n", n);

	return (0);
}
