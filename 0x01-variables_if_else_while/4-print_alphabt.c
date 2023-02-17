#include <stdio.h>

/**
 * main - main function
 *
 * Description: A program to print an alphabet in lower and uppercase
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
