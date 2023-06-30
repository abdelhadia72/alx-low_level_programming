#include "main.h"
/**
* print_buffer - prints a buffer 
* Description: function that prints a buffer
* @b: buffer to print
* @size: size of buffer
* Return: void
*/
void print_buffer(char *b, int size)
{
	int byte = 0, index;

	for (; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		for (index = 0; index < 10; index++)
		{
			if (index % 2 == 0 && index != 0)
				printf(" ");
			if (byte + index < size)
				printf("%02x", b[byte + index]);
			else
				printf("  ");
		}
		printf(" ");
		for (index = 0; index < 10; index++)
		{
			if (byte + index >= size)
				break;
			if (b[byte + index] >= 32 && b[byte + index] <= 126)
				printf("%c", b[byte + index]);
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
