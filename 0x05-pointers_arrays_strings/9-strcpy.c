#include <stdio.h>
#include "main.h"

/**
* _strcpy - copies the string pointed to 
* @dest: destination to be copy to
* @src: destination to be copied from
* Return: check code
*/

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	whilek (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
