#include "main.h"

/**
 * _strncpy - Function to copy a string
 * @dest: String to be copied
 * @src: String to copy to
 * @n: Parameter
 * Return: String
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
