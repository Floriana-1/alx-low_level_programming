#include"main.h"

/**
* fizz_buzz - printing to 100
*/

void fizz_buzz(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x == 1)
		{
			printf("%d");
		}
		else
			printf("%d");
	}
	printf("\n");

	return (0);
}
