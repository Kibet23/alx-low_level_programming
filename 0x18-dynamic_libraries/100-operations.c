#include <stdio.h>
#include <stddef.h>
/**
 * add - adds two integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum of the two integers
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts two integers
 * @a: integer 1
 * @b: integer 2
 * Return: difference btw integers
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two integers
 * @a: integer 1
 * @b: integer 2
 * Return: product of the two integers
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides two integers
 * @a: integer 1
 * @b: integer 2
 * Return: division of the two integers
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}
/**
 * mod - checks the remainder in division
 * @a: integer 1
 * @b: integer 2
 * Return: modulus and 0
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
}
