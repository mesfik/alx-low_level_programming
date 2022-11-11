#include "main.h"
/**
 * main - minimum number of coin
 *
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0 (success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coin[j])
		{
			result++;
			num -= coin[j];
		}
	}
	printf("%d\n", result);
	return (0);
}

