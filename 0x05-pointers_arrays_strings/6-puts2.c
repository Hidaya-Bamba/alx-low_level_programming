#include "main.h"

/**
 * puts2 - Function to print characters os a string
 *@str: Parameter
 *Return: 0
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
