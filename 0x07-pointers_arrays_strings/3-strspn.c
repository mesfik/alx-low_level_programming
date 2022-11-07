#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: initial segments of the string
 * @accept: some bytes of the string
 *
 * Return: initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				break;
		if (!accept[i])
			break;
	}
	return (i + 1);
}
