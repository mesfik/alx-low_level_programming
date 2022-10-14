#include "function_pointers.h"
/**
 * array_iterator - function that iterats an array
 *
 * @array: each element of array
 *
 * @size: size of an array
 *
 * @action: pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
