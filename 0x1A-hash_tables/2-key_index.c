#include "hash_tables.h"

/**
 * key_index - this functions returns the index number of a key
 * @key: pointer to the key
 * @size: size of the array
 * Return: return the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;
	unsigned long int hash_key;

	hash_key = hash_djb2(key);
	index = hash_key % size;

	return (index);
}