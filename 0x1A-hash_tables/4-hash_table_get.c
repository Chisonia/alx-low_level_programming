#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht:  Hash table Pointer
 * @key: Key Pointer 
 * Return: value if key is found and null if otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned int index;
	char *value;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			value = current->value;
			if (value == NULL)
				return (strdup("null"));
			return (strdup(value));
		}
		current = current->next;
	}

	return (NULL);
}