#include "main.h"

/**
 * array_range - function that creats array
 *
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = (int *)malloc(((max - min) + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		ptr[i - min] = i;
	return (ptr);
}
