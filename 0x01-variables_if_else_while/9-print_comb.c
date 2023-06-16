#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (No Error)
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
if (i < 9)
{
putchar(44);
}
putchar(' ');
}
putchar('\n');
return (0);
}
