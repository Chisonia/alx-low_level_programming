#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack: The string to search within
 * @needle: The substring to search for
 *
 * Return: pointer to the first occurrence of 'needle' in 'haystack',
 * or NULL if 'needle' is not found in 'haystack'.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
