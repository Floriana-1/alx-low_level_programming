#include "main.h"

/**
* more_numbers - print 10 times the numbers (0 to 14).
* Return: always return 0.
*/
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 15; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b / 10 != 0)
			{
				_putchar(b / 10 + '0');
			}
			_putchat(b % 10 + '0');
		}
		_putchar('\n');
	}
}
