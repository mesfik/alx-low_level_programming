#include "main.h"

/**
 * _realloc - the function that reallocates a memory block
 *
 * @ptr: the pointer to the old memory
 * @old_size: the size, in bytes of old memory
 * @new_size: the size to new allocated memory
 *
 * Return: tne reallocated memory pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *old_S;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	old_S = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			s[i] = old_S[i];
	}
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			s[i] = old_S[i];
	free(ptr);
	return (s);
}
