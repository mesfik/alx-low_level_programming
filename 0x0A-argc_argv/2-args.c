#include "main.h"
/**
 * main - main entry point
 *
 * @argv: argument variable
 * @argc: argument counting
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
