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
	char *token;
	char *inputbuffer = NULL;
	char *inputbuffer_copy = NULL;
	const char *delim = " \n";
	int nchars;
	int numtokens = 0, i;

	(void)argc;
	while (1)
	{
		printf("%s", prompt);
		inputbuffer = read_line();
		nchars = _strlen(inputbuffer);
		if (EOF)
		{
			printf("\nexiting...\n\n\nDisconnected\n");
			return (-1);
		}
		inputbuffer_copy = malloc(sizeof(char) * nchars);
		if (inputbuffer_copy == NULL)
		{
			perror("memory allocation error for inputbuffer_copy\n");
			return (-1);
		}
		strcpy(inputbuffer_copy, inputbuffer);
		token = strtok(inputbuffer, delim);
		while (token != NULL)
		{
			numtokens++;
			token = strtok(NULL, delim);
		}
		numtokens++;
		token = strtok(inputbuffer_copy, delim);
		argv = malloc(sizeof(char *) * numtokens);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * _strlen(token));
			strcpy(argv[i], token);
			token = strtok(NULL, delim);
		}
		argv[i] = NULL;
		exe_cmd(argv);
	}
	free(inputbuffer);
	free(inputbuffer_copy);
	return (0);
}
