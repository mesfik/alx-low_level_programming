#include <stdio.h>
/*
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
int main()
{
	int intType
	char charType
	long int longintType
	long long int longlongintType
	float floatType

	printf("Size of char: %d byte(s)\n", sizeof(charType));

	printf("Size of int: %d byte(s)\n", sizeof(intType));

	printf("Size of long int: %d byte(s)\n", sizeof(longintType));

	printf("Size of long long int: %d byte(s)\n", sizeof(longlongintType));

	printf("Size of float: %d byte(s)\n", sizeof(floatType));

	return (0);
}
