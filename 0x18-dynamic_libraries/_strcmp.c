#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 0 if the strings are equal (i.e., have the same characters).
 * A negative value if the ASCII value of the first differing character in 's1'
 * is less than that of the corresponding character in 's2'
 * A positive value if the ASCII value of the first differing character in 's1'
 * is greater than that of the corresponding character in 's2'
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
