#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to print
 * Return: 0 successful
 */

void print_chessboard(char (*a)[8])
{

	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
	{
		_ putchar(a[i][j]);
	}
		_putchar("\n");
	}
}
