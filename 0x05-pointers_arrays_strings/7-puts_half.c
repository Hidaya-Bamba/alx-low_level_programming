#include "main.h"

/**
 * puts_half - Function to print half of a string
 * @str: Parameter
 * Return:0
 */

void puts_half(char *str)
{
	int i;
	int length;

	for (i = 0 ; str[i] != '\0'; i++)
		length++;
	if (length % 2 == 0)
	{
		for (i = length / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (length % 2 != 0)
	{
		for (i = (length - 1) / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
