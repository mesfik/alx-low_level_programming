#include "main.h"
/**
 * _islower - check description
 * @c: single letter input
 * Discription: prints alphabets
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
