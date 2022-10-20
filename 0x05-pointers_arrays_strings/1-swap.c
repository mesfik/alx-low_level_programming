#include "main.h"
/**
 * swap_int - swap the value of two intiger
 *
 * @a: intiger to swap
 * @b: intiger to swap
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
