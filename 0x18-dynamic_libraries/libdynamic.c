#include "main.h"

/**
 * _abs - check the absolute value of n
 *
 * @n: input for integer
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

/**
 * _atoi - The function is intended to convert the input string s to an integer
 *
 * @s: pointer to a character parameter
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}

/**
 * _isalpha - Checks for alphabetic order
 * @c: alphabet to check for
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _isdigit - Checks for digit order
 * @c: digit to check for
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _islower - Checks for lowercase alphabet
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}


/**
 * _isupper - Checks for uppercase alphabet
 * @c: Character to be checked
 * Return: 1 if character is uppercase, otherwise 0
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

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


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _puts - prints a null-terminated string to stdout
 * @s: The string to print
 *
 * Return: void (no return value)
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}



/**
 * _strchr - locates a character in a string
 * @s: The string to search within
 * @c: The character to search for
 * Return: A pointer to the first occurrence of 'c' in 's',
 * or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}



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



/**
 * _strncpy - copies a specified number of characters
 * from the source string to the destination string
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * @n: Maximum number of characters to copy
 *
 * Return: A pointer to the destination buffer 'dest'.
 */
char *_strncpy(char *dest, char *src, int n) 
{
	char *start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n-- > 0)
		*dest++ = '\0';

	return start;
}
