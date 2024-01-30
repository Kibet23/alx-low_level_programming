#include "main.h"
/**
 * _strncat - concatenates at most 'n' chars
 * @dest: pointer to a destination string
 * @src: pointer to a source string
 * @n: number of chars capped at
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *k = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (k);
}
