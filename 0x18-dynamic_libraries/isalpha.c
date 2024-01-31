#include "main.h"
/**
 * _isalpha - checks if the character is in the alphabet
 * @c: input char
 * Return: NULL
 */
int _isalpha(int c)
{
	return ( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
