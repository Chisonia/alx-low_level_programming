#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source buffer
 * @n: Number of bytes to copy
 *
 * Return: pointer to the destination buffer 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dp = dest;
	char *sp = src;

	while (n-- > 0)
		*dp++ = *sp++;
	return(dest);
}
