#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: Pointer to the chessboard array
 *
 * Description: Prints the chessboard represented by the 2D array.
 * Each element of the array represents a square on the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}


