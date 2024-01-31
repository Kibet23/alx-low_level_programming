#include "main.h"
/**
 * _strlen - calculates the length of the string
 * @s: pointer to the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
