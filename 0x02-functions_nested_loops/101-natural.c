#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Discription: compute the sum
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; ++num)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
