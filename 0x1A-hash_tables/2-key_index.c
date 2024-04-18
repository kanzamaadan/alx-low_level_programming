#include "hash_tables.h"

/**
 * key_index - this gives you the index of a key
 * @key: the key to search the index
 * @size: the size of the array of hash table
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
