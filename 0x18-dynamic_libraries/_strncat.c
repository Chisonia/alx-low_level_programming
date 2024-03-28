#include "main.h"
/**
 * _strncat - concatenates two strings with a maximum number of characters
 * @dest: The destination string to concatenate to
 * @src: The source string to concatenate from
 * @n: The maximum number of characters to concatenate
 *
 * Return: A pointer to the destination string 'dest'.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (n-- && (*dest++ = *src++))
		*dest = '\0';
	return (temp);
}
