#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry 
 *
 * Return: Always 1 
 */
int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
   	fputs(message, stderr);
	return 1;
}

