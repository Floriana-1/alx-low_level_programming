#include "main.h"

/**
* more_numbers - print 10 times the numbers (0 to 14).
* Return: always return 0.
*/
void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (b <= 9)
	{
		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchat(a % 10 + '0');
			a++;
		}
		_putchar('\n');
		b++
		a = 0;
	}
}
