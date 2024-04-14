#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: pointer to the key
 * @size: size of the array of the hash table
 * Return: index which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hash_value = hash_djb2(key);
	return (hash_value % size);
}
