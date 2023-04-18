#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @str: source
 * Return: returns dest
 */

char *_strcat(char *dest, char *str)
{
	int l1 = 0, l2 = 0, a = 0;

	for (a = 0; *(dest + a) != '\0'; a++)
	{
		l1++;
	}
	for (a = 0; *(str + a) != '\0'; a++)
	{
		l2++;
	}
	for (a = 0; a <= l2; a++)
	{
		*(dest + (l1 + a)) = *(str + a);
	}
	return (dest);
}

