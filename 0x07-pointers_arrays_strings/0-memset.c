#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed
 *
 *  @s: pointer of a memory
 *  @b: a constant byte
 *  @n: first n bytes of the memory
 *
 *  Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
