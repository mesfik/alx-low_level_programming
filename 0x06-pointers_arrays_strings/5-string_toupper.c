#include "main.h"
/**
 * *string_toupper - a function that chenges lower to uppercase letters
 *
 * @str: string pointer
 *
 * Return: the resulting all upper strings
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{

	str[i] = toupper(str[i]);
	}
	return (str);
}
