#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: string pointer
 * @c: charactor pointer
 *
 * Return: first occurrence of the character c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
		if (s[i] == 0)
			return (NULL);
	}
	return (0);
}
