#include "main.h"

/**
 * print_last_digit - print last digit
 * Description: function that print
 * the last digit base on what's
 * passed by @n
 * @n: holder the number that
 * will get the last digit from
 * Return: last digit
 */
int print_last_digit(int n)
{
	_putchar((n % 10));
	return((n % 10));
}
