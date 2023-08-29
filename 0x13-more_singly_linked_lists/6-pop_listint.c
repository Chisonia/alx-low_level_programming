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
	int n;

	if (head == NULL || *head == NULL)
	{
	return (0);
	}
	else
	{
		listint_t *temp;

		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
