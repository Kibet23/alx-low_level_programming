#include "main.h"
/**
 * _strncpy - copies a string to n times
 * @dest: pointer to a destination string
 * @src: pointer to a source string
 * @n: integer showing the number of times to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *k = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (k);
}
