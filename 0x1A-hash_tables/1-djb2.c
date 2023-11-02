#include "hash_tables.h"
/**
 * hash_djb2 - this implementation of the djb2 algorithm
 * @str: here str for generate hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int x;

hash = 5381;
while ((x = *str++))
{
hash = ((hash << 5) + hash) + x;
}
return (hash);
}
