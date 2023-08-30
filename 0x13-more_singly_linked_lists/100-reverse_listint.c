#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: Pointer to the new head head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *current = *head;
	listint_t *after;

	while (current != NULL)
	{
		after = current->next;
		current->next = temp;

		temp = current;
		current = after;
	}
	*head = temp;

	return (temp);
}
