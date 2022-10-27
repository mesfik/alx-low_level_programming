#include "main.h"
/**
 * flip_bits - a function flip to get from one number to another
 *
 * @n: number to flip
 * @m: number to be fliped
 *
 * Return: the number of bits you would need
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0;
	unsigned long int comp1 = 0;
	unsigned long int comp2 = 0;

	while (!(n == 0 && m == 0))
	{
		comp1 = n & 1;
		comp2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp1 != comp2)
			mask++;
	}
	return (mask);

}
