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
for (j = 1 ; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar(44);
putchar(' ');
if(i == 8 && j ==9)
{
return 0;
}
}
}
putchar('\n');
return (0);
}
