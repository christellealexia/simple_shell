#include "main.h"

/**
 * arrayTokens - makes an of of tokens
 * @inputbuffer: command that is entered
 * Return: a pointer to pointer
 */

char **arrayTokens(void)
{
	char *inputbuffer = read_line();
	char *copy_inputbuffer;
	int nchars;
	char **tokenArray;
	char *token;
	const char *delim = " \n";
	int numtokens = 0, i;

	nchars = _strlen(inputbuffer);
	copy_inputbuffer = malloc(sizeof(char) * nchars);
	if (copy_inputbuffer == NULL)
	{
		perror("memory allocation for copy_inputbuffer failed\n");
		exit(EXIT_FAILURE);
	}
	strcpy(copy_inputbuffer, inputbuffer);
	token = strtok(inputbuffer, delim);
	while (token != NULL)
	{
		numtokens++;
		token = strtok(NULL, delim);
	}
	numtokens++;
	token = strtok(copy_inputbuffer, delim);
	tokenArray = malloc(sizeof(char *) * numtokens);
	for (i = 0; token != NULL; i++)
	{
		tokenArray[i] = malloc(sizeof(char) * _strlen(token));
		strcpy(tokenArray[i], token);
		token = strtok(NULL, delim);
	}
	tokenArray[i] = NULL;
	free(copy_inputbuffer);
	return (tokenArray);
}
