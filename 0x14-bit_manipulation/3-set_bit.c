#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @index: the index, starting from 0 of the bit you want to set
 * @n: entry intiger
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}

