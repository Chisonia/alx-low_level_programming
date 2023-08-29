#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list.
 * @head: first node in the linked list.
 * @index: index of the node to return.
 *
 * Return: pointer to the node we are looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);

		i++;
		temp = temp->next;
	}
	return (NULL);
}
