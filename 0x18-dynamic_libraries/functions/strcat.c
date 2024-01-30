#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *k = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (k);
}
