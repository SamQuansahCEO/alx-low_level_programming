#include "main.h"

/**
 * _isalpha - returns 1, if c is a letter uppercase, lowercase
 *
 * @c: The int to print
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
