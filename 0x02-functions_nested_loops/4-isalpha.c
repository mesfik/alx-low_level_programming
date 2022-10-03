#include "main.h"
/**
 * _isalpha - check for alphabets
 * @c: single letter input
 * Return: 1 if c is letter( either uppercase or lower)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
