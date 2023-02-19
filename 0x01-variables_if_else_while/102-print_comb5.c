#include <stdio.h>

/**
 * main - Entry Point
 * Description: A program that prints all possible
 * different combinations of two digits
 * Return: Alwyas zero
 */

int main(void)
{
	int i = 0, j;

	while (i <= 99)
	{
		j = i;
		while (i <= 99)
		{
			if (i != j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
