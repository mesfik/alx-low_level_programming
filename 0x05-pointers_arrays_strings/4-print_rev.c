#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints string in reverse followed by a new line
 *
 * @s: pointer to a string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int a;

	while (a = (strlen(s) - 1))
	{
		if (a >= 0)
			_putchar(*(s + 1));
		a--;
	}
	_putchar('\n');
}
