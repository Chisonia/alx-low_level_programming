#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The sum of a and b.
 */

int add(int a, int b)
{
	return (a + b);
}


/**
 * sub - Subtracts one integer from another.
 * @a: The first integer (minuend).
 * @b: The second integer (subtrahend).
 * Return: The difference between a and b.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The product of a and b.
 */

int mul(int a, int b)
{
	return (a * b);
}


/**
 * div - Divides one integer by another.
 * @a: The dividend.
 * @b: The divisor.
 * Return: The quotient of a divided by b.
 *         If b is 0, prints an error message and returns 0.
 */


int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the remainder of dividing one integer by another.
 * @a: The dividend.
 * @b: The divisor.
 * Return: The remainder of dividing a by b.
 * If b is 0, prints an error message and returns 0.
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
