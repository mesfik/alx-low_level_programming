#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: points to string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char prom;
	int i;
	int l;
	int m;

	l = 0;
	m = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	m = l - 1;
	for (i = 0; i < l / 2; i++)
	{
		prom = s[i];
		s[i] = s[m];
		s[m--] = prom;
	}
}
