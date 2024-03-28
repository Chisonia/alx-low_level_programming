#include "main.h"
/**
 * _strpbrk - searches a string for any character from another string
 * @s: The string to search within
 * @accept: The string containing characters to search for
 *
 * Return: pointer to the first occurrence of
 * any character from 'accept' in 's',
 * or NULL if no matching character is found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp = accept;

		while (*temp)
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return (NULL);
}

