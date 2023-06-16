#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (No Error)
 */
int main(void)
{
int i, j;
for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8 || j != 9)
{
putchar(44);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
