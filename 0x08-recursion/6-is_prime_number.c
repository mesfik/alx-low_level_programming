#include "main.h"
int is_prime(int num, int div);
/**
 * is_prime_number - function to indicate prime numbers
 *
 * @n: entry number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, (n - 1)));
}
/**
 * is_prime - find prime number
 *
 * @num: entry number
 * @div: iterator
 *
 * Return: prime or not
 */
int is_prime(int num, int div)
{
	if (div == 1)
		return (1);
	if (num % div == 0 && div > 0)
		return (0);
	return (is_prime(num, div - 1));
}
