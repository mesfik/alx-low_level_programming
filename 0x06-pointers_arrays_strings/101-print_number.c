#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @n: entry intiger
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		_putchar('0' + n);
	} else
	{
		print_number(n / 10);
		_putchar(48 + (n % 10));
	}
}

