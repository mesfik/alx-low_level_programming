#include "search_algos.h"
/**
 * jump_search - function that searches for a value in a sorted array
 *
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index, -1 if NULL or not exist
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, prev;


	jump = sqrt(size);
	prev = 0;

	if (array == NULL)
		return (-1);
	while (array[jump - 1] < value && jump < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = jump;
		jump += sqrt(size);
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);
	for (i = prev; i < size && i < jump; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
