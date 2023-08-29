#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint_end -adds new node at the end of a linked list.
 * @head: first node and the list pointer.
 * @n: data of new node.
 *
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next =  new_node;
	}
	return (new_node);
}
