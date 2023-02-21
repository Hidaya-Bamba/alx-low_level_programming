#include "main.h"

/**
 * main - Entry Point
 *
 * Description: A function to print alpahbet in lowercase
 *
 * Return: Alwyas zero
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}

