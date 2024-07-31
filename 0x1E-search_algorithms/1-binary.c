#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}

/**
 * print_array - prints the array
 * @array: pointer to the first element of the array to search in
 * @left: left index
 * @right: right index
 */

void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i >= left && i <= right; i++)
	{
		if (i == right)
		{
			printf("%d\n", array[i]);
		}

		else
		{
			printf("%d, ", array[i]);
		}
	}
}