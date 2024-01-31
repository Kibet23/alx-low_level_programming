#include "main.h"
/**
 * _strpbrk - searches for a character in a string
 * @s: string
 * @accept: string 2
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *k;

	while (*s)
	{
		k = accept;
		while (*k)
		{
			if (*s == *k)
			{
				return ((char *)s);
			}
			k++;
		}
		s++;
	}
	return (NULL);
}
