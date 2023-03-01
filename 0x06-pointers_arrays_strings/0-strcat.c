#include "main.h"
#include <stdio.h>
/**
* _strcat - concatenates 2 strings
* @dest: destination string
* @src: source string
* Return: resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
