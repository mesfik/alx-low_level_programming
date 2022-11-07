#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area
 *
 * @dest: destination memory to be copied
 * @src: source file to coppy
 * @n: size if array
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
