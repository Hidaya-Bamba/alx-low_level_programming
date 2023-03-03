#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of characters to be copied from src
 *
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy the source string to the destination string */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Add null terminator to the resulting string */
	for ( ; i < n; i++)
		dest[i] = '\0';

	/* Return the resulting string */
	return (dest);
}

