#include "hash_tables.h"

/**
 * key_index - This func gets the index at which the key/value should be
 * 	stored in the array
 * @key: The key to get the index of
 * @size: The size of the array of the hash table
 * Return: Returns the index of the key
 *
 * Description: This func uses the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
