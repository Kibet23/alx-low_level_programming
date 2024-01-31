#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string in question
 *
 * Return: final integer value
 */
int _atoi(char *s)
{
	int k = 0;
	int j = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-')
	{
		k = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		j = j * 10 + (*s - '0');
		s++;
	}
	return (k * j);
}
