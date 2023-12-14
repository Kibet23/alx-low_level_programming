#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index starting from 0 of the bit you want to set
 * @n: unsigned long integer to be assigned a binary
 *
 * Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /*iNdex out of range*/

	*n &= ~(1UL << index);
	return (1);
}
