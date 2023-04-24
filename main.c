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
	char *inputbuffer = NULL;

	(void)argc;
	(void)argv;
	while (1)
	{
		printf("%s", prompt);
		inputbuffer = read_line();
		exe_cmd((arrayTokens(inputbuffer)));
	}
	free(inputbuffer);
	return (0);
}
