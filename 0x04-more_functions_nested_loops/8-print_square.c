#include "main.h"

/**
* print_square - function that print a square
* @size: size - variable
* Return: always return 0.
*/

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= siz; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
