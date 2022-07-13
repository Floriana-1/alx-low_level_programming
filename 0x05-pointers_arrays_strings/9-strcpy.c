#include "main.h"

/**
* _strcpy - a function that copies the string pointed to by src
* @dest: destination to copy to
* @src: destination to copy from
* Return: check code
*/

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
	}

	return (dest);
}
