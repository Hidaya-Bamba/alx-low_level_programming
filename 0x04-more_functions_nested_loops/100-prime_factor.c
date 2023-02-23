#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int i;
	long int max_factor = -1;

	while (num % 2 == 0)
	{
		max_factor = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_factor = i;
			num /= i;
		}
	}

	if (num > 2)
		max_factor = num;

	printf("%ld\n", max_factor);
	return (0);
}
