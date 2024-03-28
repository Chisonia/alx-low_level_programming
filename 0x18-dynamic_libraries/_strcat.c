#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: The destination string to concatenate to
 * @src: The source string to concatenate from
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return (temp);
}
