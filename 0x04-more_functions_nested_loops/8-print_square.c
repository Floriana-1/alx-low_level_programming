#include "main.h"

/**
* print_square - function that print a square
* @size: size - variable
* Return: always return 0.
*/

void print_square(int size)
{
	if (size < 1)
		_putchat('\n');
	else
	{
		int jj;

		for (jj = 1; jj <= size; jj++)
		{
			int bb;

			for (bb = 1; bb <= size; bb++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
