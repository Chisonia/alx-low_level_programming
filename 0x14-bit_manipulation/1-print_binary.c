#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int shift, count = 0;
	unsigned long int current;

	for (shift = 63; shift >= 0; shift--)
	{
	current = n >> shift;

	if (current & 1)
{
	putchar('1');
	count++;
}
else if (count)
	putchar('0');
	}
if (!count)
	putchar('0');
	}
