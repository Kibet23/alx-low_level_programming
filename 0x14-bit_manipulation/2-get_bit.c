#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer to be returned in binary
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: value of the bit at index index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);/*Error: index out of range*/

	return ((n >> index) & 1);
}
