#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 *
 * @s: a string pointer
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
