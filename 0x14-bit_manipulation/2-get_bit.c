#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long integer to retrieve the bit value.
 * @index: position of bit to be retrieved.
 *
 * Return: value of bit (0 or 1)mon success and -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index >= 63)
		return (-1);

	bit_num = (n >> index) & 1;
	return (bit_num);
}
