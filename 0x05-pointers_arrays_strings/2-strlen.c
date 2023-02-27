#include "main.h"
/**
 * _strlen - return he length of string
 *
 * @s: string to check length
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
