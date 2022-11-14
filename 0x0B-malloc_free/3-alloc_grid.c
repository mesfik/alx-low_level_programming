#include "main.h"
/**
 * alloc_grid - function to a 2 dimensional array of integers
 *
 * @width: width of an array
 * @height: hight of the array
 *
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **Array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	Array = (int **) malloc(height * sizeof(int *));
	if (Array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		Array[i] = (int *) malloc(width * sizeof(int));
		if (Array[i] == NULL)
		{
			free(Array);
			for (j = 0; j < i; j++)
				free(Array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			Array[i][j] = 0;
		}
	}
	return (Array);
}
