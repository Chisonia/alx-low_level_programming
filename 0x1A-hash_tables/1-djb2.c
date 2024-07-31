#include "hash_tables.h"

/**
 * hash_djb2 - djb2 is a fast and simple hash function
 * @str: a pointer to the key
 * Return: the hash value to be distributed
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	/* Initialize hash to 5381 */
	unsigned long int hash = 5381;

	/* declare an int var to get the ascii value of the string (key)*/
	int c;

	/* use a loop to iterate through the string (key) to hash the key*/
	while ((c = *str++))
	{
		/* The hashing formula to hash the key*/
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
