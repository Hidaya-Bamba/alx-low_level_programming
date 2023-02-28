#include "main.h"
#include <stdio.h>

/**
 * print_array - Function to print elements in an array
 * @a:Parameter
 * @n: Parameter
 * Return:0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
