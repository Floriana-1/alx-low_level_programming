#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	putchar('\n');
	return (0);
}
