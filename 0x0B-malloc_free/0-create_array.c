#include "main.h"
/**
 * create_array - function that creates an array of chars
 *
 * @size: size of an array
 * @c: character pointer
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	A = malloc(sizeof(c) * size);
	if (size == 0 || A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
