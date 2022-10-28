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
	if (n < 10)
	{
		_putchar(48 + n);
	}
	if (n > 10)
	{
		print_number(n / 10);
		_putchar(48 + (n % 10));
	}
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
}

