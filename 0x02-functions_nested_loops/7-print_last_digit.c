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
	int n2;

	if(n >= 0)
	{
		n2 = (n  % 10);
	}else
	{
		n2 = -(n % 10);
	}
	_putchar(n2 + '0');
	return n2;
}
