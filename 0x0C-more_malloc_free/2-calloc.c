#include "main.h"

/**
 * _calloc - fanction allocates memory for an array
 *
 * @nmemb: elements of member
 * @size: sizes of array
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		((char *)ptr)[i] = 0x00;
	return (ptr);
}
