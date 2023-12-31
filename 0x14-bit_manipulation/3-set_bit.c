#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to change.
 * @index: position of bit to set.
 *
 * Return: 1 on success, or -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
