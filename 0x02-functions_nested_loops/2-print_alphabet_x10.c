#include "main.h"
/**
 * print alphabet - check description
 * Description: It prints the alphabet in lowercase ten times followed by new line
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;

	i = 97;
	j = 0;

	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n')
	}
}
