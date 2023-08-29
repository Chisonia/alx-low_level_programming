#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint -adds new node at the beginning of a linked list.
 * @head: first node and the list pointer.
 * @n: data of new node.
 *
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
