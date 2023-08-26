#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - To free the list_t list.
 * @head: Pointer to the head of the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
