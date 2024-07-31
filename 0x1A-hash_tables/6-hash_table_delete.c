#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table Pointer
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL;

	for (i = 0; i < ht->size; i++)
	{
		for (ptr = ht->array[i]; ptr != NULL; ptr = ptr->next)
		{
			free(ptr->key);
			if (ptr->value != NULL)
				free(ptr->value);
			free(ptr);
		}
	}
	free(ht->array);
	free(ht);
}
