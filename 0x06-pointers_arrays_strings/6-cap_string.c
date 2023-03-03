#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to string whose words to be capitalized.
 *
 * Return: Pointer to capitalized string.
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first character of the string */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
	str[0] -= 32;
	}

	/*
	* Capitalize the first character after a space, tabulation, new line,
	* comma, semicolon, period, exclamation mark, question mark, double
	* quote, open parenthesis, close parenthesis, open brace, or close
	* brace.
	*/
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
	    	|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
	    	|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
	    	|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
	    	|| str[i - 1] == '}')
		{
	    if (str[i] >= 'a' && str[i] <= 'z')
	    {
		str[i] -= 32;
	    }
		}
	}

	return (str);
}

