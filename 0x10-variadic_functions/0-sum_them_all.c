#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum all parameters
 * @n: The number of the parameter passed to the function
 * @...: A variable number of parameters whose sum is to be calculated
 * Return: if n == 0, otherwise the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list all_numbers;
	unsigned int i, sum = 0;

	va_start(all_numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(all_numbers, int);
	}

	va_end(all_numbers);
	return (sum);
}
