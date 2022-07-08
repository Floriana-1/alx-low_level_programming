#include "main.h"

/**
* print_diagonal -checks to print diagonal
* @n: n - variable
* Return: Always return 0.
*/

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			if (x == y)
			{
				_putchar(92);
				break;
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
