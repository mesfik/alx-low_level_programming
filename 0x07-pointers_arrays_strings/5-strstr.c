#include "main.h"
/**
 * _strstr - unction that locates a substring
 *
 * @haystack: string which is pointed from
 * @needle: first occurrence of the substring
 *
 * Return:  pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
