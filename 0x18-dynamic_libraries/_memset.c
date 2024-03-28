#include "main.h"
/**
 * *_memset - sets a block of memory at the location
 * @s: a pointer to the memory to be filled
 * @b: the value to be set
 * @n: number of bytes to be set
 * Return: the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n-- > 0)
		*p++ = (unsigned char)b;
	return(s);
}
