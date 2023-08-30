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
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp != NULL && i < idx - 1)
	{
	temp  = temp->next;
		i++;
	}

	if (temp != NULL)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
