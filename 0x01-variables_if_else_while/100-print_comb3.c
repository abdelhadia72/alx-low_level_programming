#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (No Error)
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0 ; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar(44);
putchar(' ');
}
}
return (0);
}