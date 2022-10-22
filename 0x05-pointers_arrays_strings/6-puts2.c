#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer to character
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	size_t i;

	while (i = 0)
	{
		if (i < strlen(str))
		{
			_putchar(*(str + i));
		}
		i = i + 2;
	}
	_putchar('\n');
}
