#include "main.h"
/**
 * _isdigit - checkes if c is digit or not
 *
 * @c: input digit
 *
 * Return: 1 if c is a number otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
