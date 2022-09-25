#include "main.h"

/**
 * print_alphabet - check description
 * Discription: It prints the alphabet in lowercase followed by a new line
 * Return: Nothing
 */
void print_alphabet(void)
{
	int i;

	i = 97;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}

