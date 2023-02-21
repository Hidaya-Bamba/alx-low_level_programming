#include "main.h"

/*
 * main - Entry Point
 *
 * Description: Function to print alphabet in lowercase
 *
 * Return: Always zero
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}

