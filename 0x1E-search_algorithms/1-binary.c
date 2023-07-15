#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: -1 if NULL or not exist
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, min, mid, max;

	min = 0;
	max = size - 1;

	if (array == NULL)
		return (-1);

	while (min <= max)
	{
		mid = ((max + min) / 2);

		printf("Searching in array: ");
		for(i = min; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i < max)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			min = mid + 1;
		else
			max = mid - 1;
	}
	return (-1);
}
