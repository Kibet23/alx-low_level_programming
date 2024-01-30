#include "main.h"
/**
 * _memset - sets a block of memory to the specified value
 * @s: pointer to the mem location
 * @b: memory to be copied from
 * @n: mem size
 * Return: NULL
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *k = s;

	while (n-- > 0)
	{
		*k++ = (unsigned char)b;
	}
	return (s);
}
