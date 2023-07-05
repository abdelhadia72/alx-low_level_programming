#include "main.h"

int isPrime(int num, int divisor);
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (isPrime(n, n - 1));
}

/**
 * isPrime - Recursive helper function to check if a number is prime
 * @num: The number to be checked
 * @div: The current divisor to be checked
 * Return: 1 if the number is prime, 0 otherwise
 */
int isPrime(int num, int div)
{
	if (num < 2)
		return (0);
	if (div == 1)
		return (1);

	if (num % div == 0)
		return (0);

	return (isPrime(num, div - 1));
}
