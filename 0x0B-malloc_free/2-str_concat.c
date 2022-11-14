#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string to be concatinated
 * @s2: string to be concatinated
 *
 * Return: pointer should point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, ln1, ln2, length;
	char *conc;

	ln1 = strlen(s1);
	ln2 = strlen(s2);
	length = ln1 + ln2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	conc = (char*) malloc(sizeof(char) * (length + 1));

	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		conc[i + ln1] = s2[i];
	}
	return (conc);
}
