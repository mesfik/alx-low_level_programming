#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatinats two strings
 *
 * @dest: destination where the source file to be conc
 * @src: the source file to be conc
 * @n: n bytes to be used
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i;

	length = strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
