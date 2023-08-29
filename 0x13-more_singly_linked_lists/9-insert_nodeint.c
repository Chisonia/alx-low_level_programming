#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a linked list.
 * @head: pointer to the first node of the linked list.
 * @idx: index at which the new node should be inserted.
 * @n: value for the new node.
 *
 * Return: address of the new node, or NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current, *prev;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	prev = NULL;
	while (current != NULL && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current;
	if (prev != NULL)
		prev->next = new_node;

	return (new_node);
}
