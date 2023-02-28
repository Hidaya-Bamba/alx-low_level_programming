#include "main.h"

/**
 * _strcpy - A function to copy a string
 * @dest: Location of copied string
 * @src: Location to copy strings from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
