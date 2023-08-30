#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes the node at a given index in a linked list.
 * @head: pointer to a pointer to the head of the linked list.
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	temp = NULL;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		temp = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	temp->next = current->next;
	free(current);

	return (1);
}

