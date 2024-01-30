#include "main.h"
/**
 * _strspn - calculates the length of initial segment of a string
 * @s: segment of a string
 * @accept: string 2 used for comparison
 * Return: length count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *k;

	while (*s)
	{
		k = accept;
		while (*k && *k != *s)
			k++;
		if (!*k)
			break;
		i++;
		s++;
	}
	return (i);
}
