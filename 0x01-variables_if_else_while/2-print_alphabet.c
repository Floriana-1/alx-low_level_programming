/**
*2-print_alphabet.c
*/
#include <stdio.h>
/**
* main-Main function goes here
*
* Return: Always 0 (success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
