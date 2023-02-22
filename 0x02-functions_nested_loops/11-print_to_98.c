#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function to print numbers to 98
 *
 * @n: Parameter to be taken
 *
 * Return: Printed numbers
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
