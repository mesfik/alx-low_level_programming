#include "main.h"
#include <string.h>
/**
 * *_strcat -  function that concatenates two strings
 *
 * @dest: a string destination
 * @src: a source file to be concatinated
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length;
	size_t i;

	length = strlen(dest);
	i = 0;

	while (i <= strlen(src))
	{
		*(dest + length + i) = *(src + i);
		i++;
	}
	return (dest);
}
