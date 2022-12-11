#include "main.h"

/**
 * string_nconcat - function that concatinate two strings
 *
 * @s1: the first string to be concatinated
 * @s2: second string to be concatinated
 * @n: added byte to memory allocated
 *
 * Return: pointer to point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, length_1 = 0, length_2 = 0;
	char *ptr;

	while (s1 && s1[length_1])
		length_1++;
	while (s2 && s2[length_2])
		length_2++;
	if (n > length_1)
		n = length_2;
	ptr = (char* )malloc(length_1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length_1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		ptr[length_1 + i] = s2[i];
	ptr[length_1 + i] = '\0';
	return (ptr);
}
