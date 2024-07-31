#include "hash_tables.h"

/**
 * hash_table_print - This function prints the item in hash table
 * @ht: Pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (ptr = ht->array[i]; ptr != NULL; ptr = ptr->next)
		{
			if (printed != 0)
				printf(", ");

			if (ptr->value != NULL)
				printf("\'%s\': \'%s\'", ptr->key, ptr->value);
			else
				printf("\'%s\': \'%s\'", ptr->key, "(null)");
			printed = 1;
		}
	}
	printf("}\n");
}