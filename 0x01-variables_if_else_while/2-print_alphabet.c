#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A program that prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
