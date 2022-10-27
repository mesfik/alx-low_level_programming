#include "main.h"
/**
 * reverse_array - a function that reverses an array
 *
 * @a: pointer to the array
 * @n: number of elments in the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int prom;
	int i;

	i = 0;

	while (i < n / 2)
	{

		prom = *(a + i);
		*(a + i) = a[n - i - 1];
		a[n - i - 1] = prom;
		i++;
	}
}
