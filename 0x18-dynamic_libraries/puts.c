#include "main.h"
/**
 * _puts - outputs a string to the stdout
 * @s: string in question
 *
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
