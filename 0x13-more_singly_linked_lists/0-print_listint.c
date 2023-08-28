#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


/**
 * print_listint - print out the elements of a linked list.
 * @h: pointer to the head of the linked list.
 *
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * main - Entry point.
 *
 * Description: Creates a linked list of integer and prints it's elements.
 *
 * Return: Always 0.
 */

int main(void)
{
	listint_t *head = NULL;
	listint_t *new_node, *temp;
	size_t n;
	size_t i = 15;

	while (i > 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			printf("Error\n");
			return (1);
		}
		new_node->n = i;
		new_node->next = head;
		head = new_node;
		i--;
	}
	n = print_listint(head);
	printf("->%lu elements\n", n);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	return (0);
}

