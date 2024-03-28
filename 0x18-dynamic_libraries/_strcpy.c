#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: The destination buffer to copy to
 * @src: The source string to copy from
 *
 * Return: A pointer to the destination buffer 'dest'.
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++))
		;
	return (temp);
}
