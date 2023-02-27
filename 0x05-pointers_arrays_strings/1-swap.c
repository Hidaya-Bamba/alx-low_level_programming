#include "main.h"

/**
 * swap_int - Function that swaps the value of twon integers
 * @a: Integer
 * @b: Integer
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
