#include "main.h"

/**
 * _islower - Short description, line
 *
 * @c: container for value to be compared
 *
 * Retur: always 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
