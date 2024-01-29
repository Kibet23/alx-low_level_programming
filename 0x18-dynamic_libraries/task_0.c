#include "main.h"
/**
 * _putchar - implements the putchar function
 * @c: character to be implemented
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - checks if the character is in small letters
 * @c: input
 * Return: 0 if false and 1 if true
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * _isalpha - checks whther a given character is an alphabetic character
 * @c: input
 * Return: 1 if true and 0 (false)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
 * _abs - calculates the absolute value of an integer
 * @n: input
 * Return: absolute value of n
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}
/**
 * _isupper - implements the isupper function
 * @c: input char
 * Return: 1 (true) and 0 (false)
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
/**
 * _isdigit - checks if the input is within 0-9
 * @c: input
 * Return: 0 and 1
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * _puts - outputs a string to the stdout
 * @s: pointer to the string
 * Return: NULL
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}
/**
 * _strcpy - copies the string
 * @dest: pointer to the destination
 * @src: pointer to the source
 * Return: NULL
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
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-')
	{
		j = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		i = i * 10 + (*s - '0');
		s++;
	}
	return (i * j);
}
/**
 * _strcat - concanates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: appended string
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
/**
 * _strncat - concanates two strings to a most of 'n' chars
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of chars to be concanated at most
 * Return: concanated string
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
/**
 * _strncpy - copies at most 'n' characters among different strings
 * @dest: destination string
 * @src: source string
 * @n: chars cap
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
/**
 * _strcmp  - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: comparison of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/**
 * _memset - sets a block of memory to the specified value
 * @s: pointer to the memory area to be filled
 * @b: value to be set
 * @n: byte value
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *k = s;

	while (n-- > 0)
	{
		*k++ = (unsigned char)b;
	}
	return (k);
}
/**
 * _memcpy - copies a block of memory from a sorce to destination address
 * @dest: destination address
 * @src: source address
 * @n: times the loop iterates
 * Return: copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *k = dest;
	const unsigned char *s = src;

	for (unsigned int i = 0; i < n; i++)
	{
		k[i] = s[i];
	}
	return (dest);
}
/**
 * _strchr - searches for the first occurence of a specified character c
 * @s: pointer to the string
 * @c: specified character
 * Return: pointer to the first occurence of the character in the string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
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
/**
 * _strspn - calculates the length of the initial segment of string
 * @s: first string
 * @accept: second string
 * Return: NULL
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	const char *k;

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
/**
 * _strpbrk - searches for any character common btw two strings
 * @s: first string
 * @accept: second string
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *k;

	while (*s)
	{
		k = accept;
		while (k)
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
/**
 * _strstr - searches for the first occurence of a substring
 * @haystack: substring to be searced from
 * @needle: to search
 * Return: NULL
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
