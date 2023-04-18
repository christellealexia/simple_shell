#include "main.h"

/**
 * _strlen - entry point
 * @s: pointer
 * description: 'display the length of a string'
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int length = 0;
	int a;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		length++;
	}
	return (length);
}
