#include "main.h"

/**
* print_square - function that print a square
* @size: size - variable
* Return: always return 0.
*/

void print_square(int size)
{
	int x, y;

	size = 4;

	if (size <= 0)
		_putchat('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
