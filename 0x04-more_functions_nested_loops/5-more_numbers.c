#include "main.h"

/**
* more_numbers - print 10 times the numbers (0 to 14).
* Return: always return 0.
*/
void more_numbers(void)
{
	int a, b;

	for (x = 0; x < 10; x++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
