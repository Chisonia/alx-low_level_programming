#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int value;

	unsigned long int xor_result = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		value = xor_result >> i;

		if (value & 1)
			count++;
	}
	return (count);
}
