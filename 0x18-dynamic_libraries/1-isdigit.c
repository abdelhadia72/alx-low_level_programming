#include "main.h"

/**
 * _isdigit - check the digit
 * Description: This function check
 * if the argument gaving is it digit
 * or not
 * @c: is the argument pass in
 * Return: 1 digit , 0 something else
 */

int _isdigit(int c)
{
	int r;

	r = 0;
	if (c <= 57 && c >= 48)
		r = 1;
	return (r);
}
