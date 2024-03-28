#include "main.h"
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
