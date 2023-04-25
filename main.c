#include "main.h"

/**
 * main - a prompt and user input
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0 on success
 */

int main(int argc, char **argv)
{
	char *prompt = "(AlexiaNeza)$ ";

	(void)argc;
	while (1)
	{
		printf("%s", prompt);
		_execute(argv);
	}
	return (0);
}
