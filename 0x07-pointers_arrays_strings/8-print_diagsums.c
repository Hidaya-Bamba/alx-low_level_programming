#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *                  of integers
 *
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* add elements on the first diagonal */
		sum1 += *(a + i * size + i);

		/* add elements on the second diagonal */
		sum2 += *(a + i * size + (size - 1 - i));
	}

	/* print the sum of the first diagonal */
	printf("%d, ", sum1);

	/* print the sum of the second diagonal */
	printf("%d\n", sum2);
}

