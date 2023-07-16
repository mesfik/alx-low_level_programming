#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted array
 *
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index, -1 if NULL or not exist
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	if (pos > high)
		printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
