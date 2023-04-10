#include "hash_tables.h"

/**
 * key_index - Returns the index at which a key/value pair should be stored
 *             in the array of a hash table.
 *
 * @key: The key for which to get the index.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: This function uses the djb2 hashing algorithm to calculate
 *              the hash value of the given key, and then returns the index
 *              of the corresponding slot in the hash table's array. The
 *              index is calculated as the modulus of the hash value and the
 *              size of the array, ensuring that it falls within the valid
 *              range of indices.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

