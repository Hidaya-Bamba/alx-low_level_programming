#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print possible combinations of two numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 99 ; i++)
	{
		for (j = i ; j <= 99 ; j++)
		{
			int a = i / 10;
			int b = i % 10;
			int c = j / 10;
			int d = j % 10;

			putchar(a ? '0' + a : '0');
			putchar('0' + b);
			putchar(' ');
			putchar(c ? '0' + c : '0');
			putchar('0' + d);
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}

		}

	}
	putchar('\n');
	return (0);
}
