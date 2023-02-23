#include "main.h"

/**
 * positive_or_negative - Function to print positiv or negative number
 *
 * @i: Parameter
 *
 * Return: Number
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
