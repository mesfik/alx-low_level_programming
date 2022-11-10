#include "main.h"
int find_sqrt(int num, int root);
/**
 * _sqrt_recursion - function of natural square root of a number
 *
 * @n: entry number to be tested
 *
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
/**
 * find_sqrt - function that find a natural sqrt
 *
 * @num: natural number
 * @root: sqrt
 *
 * Return: find the root
 */
int find_sqrt(int num, int root)
{
	if (root * root > num)
		return (-1);
	if (root * root == num)
		return (root);
	return (find_sqrt(num, (root + 1)));
}
