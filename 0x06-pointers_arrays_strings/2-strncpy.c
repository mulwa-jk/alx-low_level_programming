#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: char to check
 * @src: char to check
 * @n: number of  byte of src string
 * Return: pointer to the string dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(scr + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}



