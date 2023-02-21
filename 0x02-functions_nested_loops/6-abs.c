#include "main.h"

/**
 * _abs - Function to print absolute value
 *
 * @a:Parmeter to check
 *
 * Return: 0
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);

}
