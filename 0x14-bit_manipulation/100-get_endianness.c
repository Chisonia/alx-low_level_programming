#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness (big or little).
 * Return: 0 if big  and 1 if little.
 */

int get_endianness(void)
{
	unsigned int x = 0x01;
	char *byte = (char *)&x;

	return (*byte == 0x01);
}
