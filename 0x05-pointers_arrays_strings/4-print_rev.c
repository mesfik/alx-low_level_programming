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

	for (a = (strlen(s) - 1); a >= 0; a--)
	{
		_putchar(*(s + 1));
	}
	_putchar('\n');
}
