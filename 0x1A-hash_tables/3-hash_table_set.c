#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table
 * @ht: Hash table pointer
 * @key: Key pointer
 * @value: Value pointer
 * Return: 0 on success, 1 on otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *current, *newnode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			else
				return (1);
		}
		current = current->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (newnode->key == NULL || newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode->value);
		free(newnode);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}