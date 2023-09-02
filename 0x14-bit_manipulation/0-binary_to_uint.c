#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * int binary_to_uint - converts binary number to an unsigned integer.
 * @b:pointer to string of 0 and 1 char.
 *
 * Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1 b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		value = 2 * value + (b[i] -'0');
	}

	return (value);
}
