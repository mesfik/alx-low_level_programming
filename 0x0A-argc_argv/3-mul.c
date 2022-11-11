#include "main.h"
/**
 * main - entry point
 *
 * @argc: argument counting
 * @argv: argument variable
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int product;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);

	return (0);
}
