#include "main.h"
/**
 * main - entry point
 *
 * @argv: argument variable
 * @argc: argument counts
 *
 * Return: Always 0 (Success) and 1 if Error
 */
int main(int argc, char *argv[])
{
	int i, c;
	unsigned int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c]; c++)
		{
			if (!isdigit(argv[i][c]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
