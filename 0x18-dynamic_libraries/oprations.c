#include "calc.h"

/**
 * add - function to add two values
 *
 * @a: added number 1
 * @b: added number 2
 *
 * Return: sum of the values added
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * mult - function to find the product of two values
 *
 * @a: the first number to be multiplied
 * @b: the seccond number to be multiplied
 *
 * Return: product of two nums
 */
int mult(int a, int b)
{
	return (a * b);
}
/**
 * subt - function to find the subtraction of two numbers
 *
 * @a: number subtracted from
 * @b: number to be subtracted
 *
 * Return: subtracted value
 */
int subt(int a, int b)
{
	return (a - b);
}
/**
 * divs - division of a number
 *
 * @a: numrator of a number
 * @b: denominator of a number
 *
 * Return: division
 */
int divs(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}
/**
 * modl - modules of a number
 *
 * @a: devisible from
 * @b: to be devided
 *
 * Return: modules of a number
 */
int modl(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}
