#include "main.h"
/**
 * _strstr - searches for an occurence of a substring in a string
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 * Return: pointer to the beggining of the first occurence or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack != '\0')
	{
		char *k = haystack;
		char *l = needle;

		while (*k != '\0' && *l != '\0' && *k == *l)
		{
			k++;
			l++;
		}
		if (*l == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
