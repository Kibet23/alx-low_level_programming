#include "main.h"
/**
 * _strchr - searches for the first occurence of a char within a string
 * @s: string
 * @c: character in question
 * Return: character found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
