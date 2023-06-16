#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (No Error)
 */
int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0 ; j < 10; j++)
{
for(k = 1 ; k < 10; k++){
    putchar('0' + i);
    putchar('0' + j);
    putchar('0' + k);
    putchar(44);
    putchar(' ');
if(i == 7 && j ==8 && k==9)
{
return 0;
}
}
}
}
putchar('\n');
return (0);
}
