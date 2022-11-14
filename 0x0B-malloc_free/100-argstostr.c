#include "main.h"
/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: argument to be concatinated
 * @av: argument to be concatinated
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int index = 0;
	int ln = 0;
	int count, j;
	char *s, *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (count = 0; count < ac; count++)
	{
		for (j = 0; av[count][j]; j++)
			ln++;
	}
	str = (char *) malloc(ln + ac + 1);
	for (count = 0; count < ac; count++)
	{
		s = av[count];
		for (j = 0; s[j]; j++)
		{
			str[index++] = s[j];
		}
		str[index++] = '\n';
	}
	return (str);
}
