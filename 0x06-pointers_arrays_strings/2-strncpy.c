#include "main.h"
#include <string.h>
/**
 * *_strncpy - function that copies a string
 *
 * @dest: destination of string
 * @src: source string to be copied
 * @n: n bytes of string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *(src + i) != '0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
