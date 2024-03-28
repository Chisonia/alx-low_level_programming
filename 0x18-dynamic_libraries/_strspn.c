#include "main.h"
/**
 * _strspn - calculates the length of the initial segment of a string
 *            consisting of only characters from another string
 * @s: The string to search within
 * @accept: The string containing characters to search for
 *
 * Return: length of the initial segment of 's'
 * consisting of only characters from 'accept'.
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}
		if (found)
			count++;
		else
			break;
		s++;
		accept -= count;
	}
	return (count);
}
