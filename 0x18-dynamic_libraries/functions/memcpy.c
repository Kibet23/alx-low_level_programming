#include "main.h"
/**
 * _memcpy - copies a block of memory
 * @dest: pointer to the destination address
 * @src: source address
 * @n: mem size
 * Return: copied mem
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *k = dest;
	unsigned char *l = src;

	for (unsigned int i = 0; i < n; i++)
	{
		k[i] = l[i];
	}
	return (dest);
}
