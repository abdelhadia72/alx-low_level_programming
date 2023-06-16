#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (No Error)
 */
int main(void)
{
int i, j, k;
for (i = 0; i < 8; i++)
{
for (j = i + 1 ; j < 9; j++)
{
for (k = j + 1 ; k < 10; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 7 || j != 8 || k != 9)
{
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
