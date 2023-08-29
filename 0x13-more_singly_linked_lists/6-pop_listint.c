#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - deletes the head node of a list.
 * @head: pointer to the first node on the list.
 * @n: variable to store head node data
 *
 * Return: data stored in deleted head node or 0 if head is equal to NULL.
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
