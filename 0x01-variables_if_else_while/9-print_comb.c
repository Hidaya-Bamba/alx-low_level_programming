#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print all combinations of sinle digit numbers
 *
 * Return: Always 0 
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}
