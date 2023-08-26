#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the list_t list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0; /* Counter to keep track of the number of elements*/
		while (h != NULL)
		{
			i++;
			h = h->next;
		}

	return (i);
}
