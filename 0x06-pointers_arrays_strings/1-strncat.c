#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of characters to be appended from src
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the length of destination string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append the source string to the destination string */
	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	/* Add null terminator to the resulting string */
	dest[i + j] = '\0';

	/* Return the resulting string */
	return (dest);
}

