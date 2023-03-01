#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: the string to print
 */

void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

