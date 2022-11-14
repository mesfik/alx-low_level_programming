#include "main.h"
/**
 * _strdup - a function that points newlly allocate a memory
 *
 * @str: a string pointer
 *
 * Return: pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i = 0, length;

	if (str == NULL)
		return (0);
	for (length = 1; str[length]; length++)
	{
		duplicate = malloc(sizeof(char) * length);
		if (duplicate == NULL)
			return (NULL);
	}
	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
