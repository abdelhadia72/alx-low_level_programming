#include "main.h"

/**
 * swap_int - funtion swap
 * Description: This funtion swap
 * two varible int with each other
 * @a: the first value
 * @b: the secend value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
