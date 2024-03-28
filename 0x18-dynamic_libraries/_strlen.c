#include "main.h"
/**
 * _strlen - computes the length of a string
 * @s: The string to compute the length of
 *
 * Return:length of the string (excluding the null terminator).
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
