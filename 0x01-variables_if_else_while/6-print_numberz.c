#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A program that prints all single numbers
 *
 * Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
