#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints list with a loop.
 * @head: pointer to the first node.
 * Return: number of nodes in the list, or exit the program with staus 98 on failure.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%p %d\n", (void *)temp, temp->n);
		count++;

		if (temp <= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			break;
		}
		temp = temp->next;
	}

	return (count);
}
