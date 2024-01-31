#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: pointer to destination pointer
 * @src: pointer to the source pointer
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *k = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (k);
}
