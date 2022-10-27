#include "main.h"
/**
 * binary_to_uint - a function that converts the binary to unsigned int
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conNum = 0;

	if (!b)
		return (0);
	for (i = 0; *(b + i) != '\0'; i++)
	{
		conNum = conNum << 1;

		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		if (*(b + i) == '1')
			conNum = conNum | 1;
	}
	return (conNum);
}
